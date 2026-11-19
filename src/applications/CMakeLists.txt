#######################################################################################################################
# Add the source files to SRCS_LIST
add_source_files(SRCS_LIST
	gqrx/gqrx.h
	gqrx/main.cpp
	gqrx/mainwindow.cpp
	gqrx/mainwindow.h
	gqrx/receiver.cpp
	gqrx/receiver.h
	gqrx/remote_control_settings.cpp
	gqrx/remote_control_settings.h
	gqrx/remote_control.cpp
	gqrx/remote_control.h
	gqrx/rig_sync_config.h
	gqrx/recentconfig.cpp
	gqrx/recentconfig.h
	gqrx/file_resources.cpp
)

if(RIG_SYNC_FOUND)
    add_source_files(SRCS_LIST
	gqrx/rig_sync.cpp
	gqrx/rig_sync.h
    )
endif()

#######################################################################################################################
# Add the UI files to UI_SRCS_LIST
add_source_files(UI_SRCS_LIST
	gqrx/mainwindow.ui
	gqrx/remote_control_settings.ui
)
