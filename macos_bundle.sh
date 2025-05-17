#!/bin/bash -e

GQRX_VERSION="$(<build/version.txt)"
IDENTITY=92E4HH2XBG
#BREW_PREFIX="$(brew --prefix)"

echo $CONDA_PREFIX
MACDEPLOYQT6=${CONDA_PREFIX}/lib/qt6/bin/macdeployqt6
#MACDEPLOYQT6=/Users/runner/micromamba/envs/gqrx/bin/macdeployqt6

echo $MACDEPLOYQT6

#rm -r Gqrx.app
mkdir -p Gqrx.app/Contents/MacOS
mkdir -p Gqrx.app/Contents/Resources

/bin/cat <<EOM >Gqrx.app/Contents/Info.plist
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple Computer//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
  <key>NSPrincipalClass</key>
  <string>NSApplication</string>
  <key>CFBundleExecutable</key>
  <string>gqrx</string>
  <key>CFBundleIdentifier</key>
  <string>dk.gqrx.gqrx</string>
  <key>CFBundleName</key>
  <string>Gqrx</string>
  <key>CFBundleIconFile</key>
  <string>gqrx.icns</string>
  <key>CFBundleShortVersionString</key>
  <string>$GQRX_VERSION</string>
  <key>CFBundleInfoDictionaryVersion</key>
  <string>6.0</string>
  <key>CFBundlePackageType</key>
  <string>APPL</string>
  <key>IFMajorVersion</key>
  <integer>1</integer>
  <key>IFMinorVersion</key>
  <integer>0</integer>
</dict>
</plist>
EOM

/bin/cat <<EOM >/tmp/Entitlements.plist
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple Computer//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
    <key>com.apple.security.cs.allow-unsigned-executable-memory</key>
        <true/>
    <key>com.apple.security.cs.allow-jit</key>
        <true/>
    <key>com.apple.security.cs.disable-executable-page-protection</key>
        <true/>
    <key>com.apple.security.cs.disable-library-validation</key>
        <true/>
    <key>com.apple.security.cs.allow-dyld-environment-variables</key>
        <true/>
</dict>
</plist>
EOM

cp build/src/gqrx Gqrx.app/Contents/MacOS
cp resources/icons/gqrx.icns Gqrx.app/Contents/Resources
# NOTE: PlutoSDR is built locally, so it will not be in the brew path
#cp "${CONDA_PREFIX}"/lib/SoapySDR/modules*/libremoteSupport.so Gqrx.app/Contents/soapy-modules
#chmod 644 Gqrx.app/Contents/soapy-modules/*

#dylibbundler -s "${CONDA_PREFIX}"/lib -od -b -x Gqrx.app/Contents/MacOS/gqrx -x Gqrx.app/Contents/soapy-modules/libPlutoSDRSupport.so -x Gqrx.app/Contents/soapy-modules/libremoteSupport.so -d Gqrx.app/Contents/libs/
#dylibbundler -s "${CONDA_PREFIX}"/lib -od -b -x Gqrx.app/Contents/MacOS/gqrx -x Gqrx.app/Contents/PlugIns/platforms/libqcocoa.dylib  -d Gqrx.app/Contents/libs/

# echo '---macdeployqt---'

# "${MACDEPLOYQT6}" Gqrx.app -no-strip -always-overwrite   # TODO: Remove macdeployqt workaround

echo '---macdeployqt 2---'

if [ "$1" = "true" ]; then
    "${MACDEPLOYQT6}" Gqrx.app -no-strip -always-overwrite -sign-for-notarization="${IDENTITY}" -libpath=Gqrx.app/Contents/Frameworks
else
    "${MACDEPLOYQT6}" Gqrx.app -no-strip -always-overwrite -libpath=Gqrx.app/Contents/Frameworks
fi

echo '---codesign---'

for f in Gqrx.app/Contents/Frameworks/*.dylib Gqrx.app/Contents/MacOS/gqrx
do
    if [ "$1" = "true" ]; then
        codesign --force --verify --verbose --timestamp --options runtime --entitlements /tmp/Entitlements.plist --sign "${IDENTITY}" "$f"
    else
        codesign --remove-signature "$f"
    fi
done