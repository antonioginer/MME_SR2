#if defined(_MSC_VER) && !defined(_XBOX) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
#if (_MSC_VER >= 1700)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#endif
#pragma warning(disable:4566)
#endif

/* Top-Level Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MAIN_MENU,
   "Trình đơn chính"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_TAB,
   "Thiết lập"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FAVORITES_TAB,
   "Ưa thích"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HISTORY_TAB,
   "Lịch sử"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_IMAGES_TAB,
   "Hình ảnh"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MUSIC_TAB,
   "Âm nhạc"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_TAB,
   "Video"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_TAB,
   "Kích hoạt Netplay"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TAB,
   "Tạo nội dung"
   )

/* Main Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SETTINGS,
   "Trình đơn lẹ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SETTINGS,
   "Truy xuất nhanh mọi cài đặt trong các trò chơi liên quan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_LIST,
   "Tải Core"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_LIST,
   "Chọn nhân nào sẽ dùng."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_CONTENT_LIST,
   "Tải Content"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_CONTENT_LIST,
   "Chọn nội dung nào sẽ bắt đầu."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_DISC,
   "Mở đĩa"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_DISC,
   "Mở đĩa phương tiện vật lý. Đầu tiên là chọn nhân (Nạp nhân) để dùng với đĩa."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DUMP_DISC,
   "Dump đĩa"
   )
MSG_HASH( /* FIXME Is a specific image format used? Is it determined automatically? User choice? */
   MENU_ENUM_SUBLABEL_DUMP_DISC,
   "Dump đĩa vật lý ra bộ nhớ trong. Điều này sẽ tiến hành lưu là dạng tệp ảnh."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLISTS_TAB,
   "Playlists Danh mục"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLISTS_TAB,
   "Đã quét nội dung khớp với Csdl và hiển thị tại đây."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_CONTENT_LIST,
   "Tạo nội dung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONLINE_UPDATER,
   "Cập nhật trực tuyến"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONLINE_UPDATER,
   "Tải/cập nhật tiện ích và thành phần của RetroArch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY,
   "Kích hoạt Netplay"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY,
   "Tham gia hoặc làm máy chủ cho netplay."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS,
   "Thiết lập"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS,
   "Cấu hình chương trình."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INFORMATION_LIST,
   "Thông tin"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INFORMATION_LIST_LIST,
   "Hiển thị thông tin hệ thống."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATIONS_LIST,
   "Tệp cấu hình"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_LIST,
   "Trợ giúp"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESTART_RETROARCH,
   "Khởi động lại chương trình."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_RETROARCH,
   "Thoát RetroArch"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_RETROARCH,
   "Thoát khỏi ứng dụng."
   )

/* Main Menu > Load Core */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE,
   "Tải về Core..."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_CORE,
   "Tải về và cài đặt nhân từ internet."
   )

/* Main Menu > Load Content */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FAVORITES,
   "Yêu thích"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOADED_FILE_DETECT_CORE_LIST,
   "Mục Downloads"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_ARCHIVE,
   "Tải Archive With Core"
   )

/* Main Menu > Load Content > Playlists */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_FAVORITES,
   "Ưa thích"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_MUSIC,
   "Âm nhạc"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_IMAGES,
   "Hình ảnh"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_VIDEO,
   "Video"
   )

/* Main Menu > Online Updater */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE_CONTENT,
   "Tải về nội dung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CORE_INFO_FILES,
   "Cập nhật Core Info Files"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_ASSETS,
   "Cập nhật Assets"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CHEATS,
   "Cập nhật Cheats"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_DATABASES,
   "Cập nhật Databases"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_OVERLAYS,
   "Cập nhật Overlays"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_GLSL_SHADERS,
   "Cập nhật GLSL Shaders"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CG_SHADERS,
   "Cập nhật Cg Shaders"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_SLANG_SHADERS,
   "Cập nhật Slang Shaders"
   )

/* Main Menu > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFORMATION,
   "Core Thông tin"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_MANAGER,
   "Quản lý cho cơ sở dữ liệu"
   )

/* Main Menu > Information > Core Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_NAME,
   "Tên của Core"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_LABEL,
   "Nhãn hiệu Core"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SYSTEM_NAME,
   "Tên hệ thống"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SYSTEM_MANUFACTURER,
   "Nhà sản xuất hệ thống"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CATEGORIES,
   "Thể loại"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_AUTHORS,
   "Tác giả"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_PERMISSIONS,
   "Phép"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_LICENSES,
   "Bản quyền"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SUPPORTED_EXTENSIONS,
   "Tiện ích mở rộng được hỗ trợ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_FIRMWARE,
   "Phần vững"
   )

/* Main Menu > Information > System Information */

MSG_HASH( /* FIXME Colon should be handled in menu_display.c like the rest */
   MENU_ENUM_LABEL_VALUE_CPU_ARCHITECTURE,
   "Kiến trúc CPU:"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CPU_CORES,
   "Số lượng lõi của CPU."
   )

/* Main Menu > Information > Database Manager */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_SELECTION,
   "Lựa chọn cơ sở dữ liệu"
   )

/* Main Menu > Information > Database Manager > Information */


/* Main Menu > Configuration File */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATIONS,
   "Tải cấu hình"
   )

/* Main Menu > Help */


/* Main Menu > Help > Basic Menu Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_SCROLL_UP,
   "Cuộn lên"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_SCROLL_DOWN,
   "Cuộn xuống"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_CONFIRM,
   "Xác nhận"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_INFO,
   "Thông tin"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_TOGGLE_MENU,
   "Bật/tắt trình đơn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_QUIT,
   "Thoát"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_TOGGLE_KEYBOARD,
   "Bật/tắt bàn phím"
   )

/* Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DRIVER_SETTINGS,
   "Trình điều khiển"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SETTINGS,
   "Video Driver"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SETTINGS,
   "Điều chỉnh thiết lập cho video ra."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SETTINGS,
   "Âm thanh"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_SETTINGS,
   "Điều chỉnh thiết lập cho âm thanh ra."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SETTINGS,
   "Input Driver"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_SETTINGS,
   "Core Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATION_SETTINGS,
   "Cấu hình"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RETRO_ACHIEVEMENTS_SETTINGS,
   "Kích hoạt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SETTINGS,
   "Playlists Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_SETTINGS,
   "Thư mục"
   )

/* Settings > Drivers */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DRIVER,
   "Input Driver"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DRIVER,
   "Video Driver"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DRIVER,
   "Trình điều khiển âm thanh"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESAMPLER_DRIVER,
   "Âm thanh Resampler Driver"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CAMERA_DRIVER,
   "Trình Camera"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BLUETOOTH_DRIVER,
   "Kích hoạt Bluetooth"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_DRIVER,
   "Wi-Fi Driver"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCATION_DRIVER,
   "Location Driver"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_DRIVER,
   "Menu Driver"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_DRIVER,
   "Record Driver"
   )

/* Settings > Video */

MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_OUTPUT_SETTINGS,
   "Điều chỉnh thiết lập cho video ra."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SYNCHRONIZATION_SETTINGS,
   "Âm thanh Sync"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GPU_SCREENSHOT,
   "Kích hoạt GPU Screenshot"
   )
#if defined(DINGUX)
#if defined(RS90)
#endif
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER,
   "Video Filter Danh mục"
   )

/* Settings > Video > CRT SwitchRes */


/* Settings > Video > Output */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ROTATION,
   "Rotation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ROTATION,
   "Forces a certain rotation of the screen. The rotation is added to rotations which the core sets."
   )
#if defined(DINGUX) && defined(DINGUX_BETA)
#endif

/* Settings > Video > Fullscreen Mode */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN,
   "Sử dụng chế độ toàn màn hình"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOWED_FULLSCREEN,
   "Chế độ toàn màn hình trong khung"
   )

/* Settings > Video > Windowed Mode */

MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_WIDTH,
   "Set the custom width size for the display window. Leaving it at 0 will attempt to scale the window as large as possible."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_HEIGHT,
   "Set the custom height size for the display window. Leaving it at 0 will attempt to scale the window as large as possible."
   )

/* Settings > Video > Scaling */

#if defined(DINGUX)
#endif

/* Settings > Video > HDR */


/* Settings > Video > Synchronization */


/* Settings > Audio */

MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_OUTPUT_SETTINGS,
   "Điều chỉnh thiết lập cho âm thanh ra."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SYNCHRONIZATION_SETTINGS,
   "Âm thanh Sync"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MIXER_SETTINGS,
   "Enable menu audio"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MUTE,
   "Âm thanh Mute"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MIXER_MUTE,
   "Audio Mixer Mute"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_VOLUME,
   "Mức âm lượng (dB)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MIXER_VOLUME,
   "Audio Mixer Volume Level (dB)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DSP_PLUGIN,
   "Âm thanh DSP Plugin"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_WASAPI_SH_BUFFER_LENGTH,
   "The audio buffer length when using the WASAPI driver in shared mode."
   )

/* Settings > Audio > Output */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_ENABLE,
   "Kích hoạt âm thanh"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DEVICE,
   "Thiết bị âm thanh"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_LATENCY,
   "Âm thanh Latency (ms)"
   )

/* Settings > Audio > Resampler */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESAMPLER_QUALITY,
   "Audio Resampler Quality"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_OUTPUT_RATE,
   "Âm thanh Output Rate (Hz)"
   )

/* Settings > Audio > Synchronization */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SYNC,
   "Âm thanh Sync"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MAX_TIMING_SKEW,
   "Âm thanh Maximum Timing Skew"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RATE_CONTROL_DELTA,
   "Âm thanh Rate Control Delta"
   )

/* Settings > Audio > MIDI */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_INPUT,
   "Input Driver"
   )

/* Settings > Audio > Mixer Settings > Mixer Stream */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_REMOVE,
   "Xoá"
   )

/* Settings > Audio > Menu Sounds */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_ENABLE_MENU,
   "Enable menu audio"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_ENABLE_MENU,
   "Enable or disable menu sound."
   )

/* Settings > Input */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTODETECT_ENABLE,
   "Kích hoạt Autoconfig"
   )
#if defined(HAVE_DINPUT) || defined(HAVE_WINRAWINPUT)
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_HOTKEY_BINDS,
   "Kích hoạt hotkeys"
   )

/* Settings > Input > Haptic Feedback/Vibration */


/* Settings > Input > Menu Controls */


/* Settings > Input > Hotkeys */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_LOAD_STATE_KEY,
   "Tải state"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SAVE_STATE_KEY,
   "Savestate Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CLOSE_CONTENT_KEY,
   "Đóng nội dung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_QUIT_KEY,
   "Thoát RetroArch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SCREENSHOT,
   "Chụp ảnh màn hình"
   )

/* Settings > Input > Port # Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_ENABLE,
   "Kích hoạt Turbo"
   )

/* Settings > Latency */


/* Settings > Core */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHARED_CONTEXT,
   "Kích hoạt Hardware Shared Context"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DUMMY_ON_CORE_SHUTDOWN,
   "Tải Core giả khi tắt máy"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_SET_SUPPORTS_NO_CONTENT_ENABLE,
   "Tự động chạy Core"
   )
#ifndef HAVE_DYNAMIC
#endif

/* Settings > Configuration */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_OPTIONS,
   "Tải Content-Specific Core Options Automatically"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAME_SPECIFIC_OPTIONS,
   "Enable customized core options by default at startup."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_OVERRIDES_ENABLE,
   "Tự động tải tập tin ghi đè"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTO_OVERRIDES_ENABLE,
   "Enable customized configuration by default at startup."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_REMAPS_ENABLE,
   "Tự động tải tập tin Remap"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTO_REMAPS_ENABLE,
   "Enable customized controls by default at startup."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_SHADERS_ENABLE,
   "Tự động tải Shader Presets"
   )

/* Settings > Saving */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BLOCK_SRAM_OVERWRITE,
   "Khi tải savestate đừng ghi đè SaveRAM"
   )

/* Settings > Logging */

MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_VERBOSITY,
   "Kích hoạt or disable logging to the terminal."
   )

/* Settings > File Browser */


/* Settings > Frame Throttle */


/* Settings > Frame Throttle > Rewind */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_ENABLE,
   "Kích hoạt Rewind"
   )

/* Settings > Frame Throttle > Frame Time Counter */


/* Settings > Recording */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_POST_FILTER_RECORD,
   "Kích hoạt Post Filter Recording"
   )

/* Settings > On-Screen Display */


/* Settings > On-Screen Display > On-Screen Overlay */

#if defined(ANDROID)
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_AUTOLOAD_PREFERRED,
   "Tự động tải Preferred Overlay"
   )

/* Settings > On-Screen Display > Video Layout */


/* Settings > On-Screen Display > On-Screen Notifications */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_PATH,
   "Onscreen Notification Font"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_SIZE,
   "Onscreen Notification Size"
   )

/* Settings > User Interface */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_ADVANCED_SETTINGS,
   "Show Advanced thiết lập"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ENABLE_KIOSK_MODE,
   "Enable Kiosk Mode"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_COMPANION_ENABLE,
   "Kích hoạt UI Companion"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_MENUBAR_ENABLE,
   "Menubar"
   )

/* Settings > User Interface > Menu Item Visibility */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_VIEWS_SETTINGS,
   "Trình đơn lẹ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_VIEWS_SETTINGS,
   "Thiết lập"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ADD_CONTENT_ENTRY_DISPLAY_MAIN_TAB,
   "Trình đơn chính"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_ENABLE,
   "Hiển thị tên của core"
   )

/* Settings > User Interface > Menu Item Visibility > Quick Menu */


/* Settings > User Interface > Views > Settings */


/* Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS,
   "Thumbnails Danh mục"
   )

/* Settings > AI Service */


/* Settings > Accessibility */


/* Settings > Power Management */

/* Settings > Achievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_ENABLE,
   "Kích hoạt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_HARDCORE_MODE_ENABLE,
   "Chế độ Hardcore"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_TEST_UNOFFICIAL,
   "Thử nghiệm không chính thức"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_TEST_UNOFFICIAL,
   "Enable or disable unofficial achievements and/or beta features for testing purposes."
   )

/* Settings > Network */

MSG_HASH(
   MENU_ENUM_SUBLABEL_STDIN_CMD_ENABLE,
   "Enable stdin command interface."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATER_SETTINGS,
   "Cập nhật"
   )

/* Settings > Network > Updater */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_BUILDBOT_URL,
   "URL của Buildbot Cores"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BUILDBOT_ASSETS_URL,
   "URL của Buildbot Assets"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_AUTO_EXTRACT_ARCHIVE,
   "Tự động giải nén lưu trữ tải về"
   )

/* Settings > Playlists */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HISTORY_LIST_ENABLE,
   "Lịch sử"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HISTORY_LIST_ENABLE,
   "Enable or disable recent playlist for games, images, music, and videos."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_CORE,
   "Core Danh mục:"
   )

/* Settings > Playlists > Playlist Management */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DELETE_PLAYLIST,
   "Xoá danh mục"
   )

/* Settings > User */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_LIST,
   "Những tài khoản"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_NICKNAME,
   "Tên truy nhập"
   )

/* Settings > User > Privacy */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CAMERA_ALLOW,
   "Cho phép Camera"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_ALLOW,
   "Enable Discord"
   )

/* Settings > User > Accounts */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_RETRO_ACHIEVEMENTS,
   "Thành tích Retro"
   )

/* Settings > User > Accounts > RetroAchievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_USERNAME,
   "Tên truy nhập"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_PASSWORD,
   "Mật khẩu"
   )

/* Settings > User > Accounts > YouTube */


/* Settings > User > Accounts > Twitch */


/* Settings > User > Accounts > Facebook Gaming */


/* Settings > Directory */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_DIRECTORY,
   "System/BIOS Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_ASSETS_DIRECTORY,
   "Mục Downloads"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ASSETS_DIRECTORY,
   "Danh mục assets"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DYNAMIC_WALLPAPERS_DIRECTORY,
   "Mục nền năng động"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_DIRECTORY,
   "Thumbnails Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LIBRETRO_INFO_PATH,
   "Core Info Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CURSOR_DIRECTORY,
   "Mục Cursor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_DIRECTORY,
   "Playlists Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CACHE_DIRECTORY,
   "Danh mục cache"
   )

/* Music */

/* Music > Quick Menu */


/* Netplay */

MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ENABLE_CLIENT,
   "Enables netplay in client mode."
   )

/* Netplay > Host */


/* Import Content */


/* Import Content > Scan File */


/* Import Content > Manual Scan */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME,
   "Tên hệ thống"
   )

/* Explore tab */

/* Playlist > Playlist Item */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RENAME_ENTRY,
   "Rename the title of the entry."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DELETE_ENTRY,
   "Xoá"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INFORMATION,
   "Thông tin"
   )

/* Playlist Item > Set Core Association */


/* Playlist Item > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_CORE_NAME,
   "Core Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_DATABASE,
   "Mục cơ sở dữ liệu nội dung"
   )

/* Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESTART_CONTENT,
   "Khởi động lại"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOSE_CONTENT,
   "Đóng nội dung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TAKE_SCREENSHOT,
   "Chụp ảnh màn hình"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_STATE,
   "Savestate Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_STATE,
   "Tải State"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNDO_LOAD_STATE,
   "Undo Tải State"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTIONS,
   "Options\" \"Tùy chọn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INPUT_REMAPPING_OPTIONS,
   "Điều khiển"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_OPTIONS,
   "Điều khiển đĩa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_LIST,
   "Danh sách thành tích"
   )

/* Quick Menu > Options */


/* Quick Menu > Options > Manage Core Options */


/* - Legacy (unused) */

/* Quick Menu > Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_LOAD,
   "Tải Remap File"
   )

/* Quick Menu > Controls > Load Remap File */


/* Quick Menu > Cheats */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_LOAD,
   "Tải tập tin Cheat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_LOAD,
   "Load a cheat file."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_SAVE_AS,
   "Lưu tập tin Cheat như"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_CHANGES,
   "Áp dụng thay đổi của Cheat"
   )

/* Quick Menu > Cheats > Start or Continue Cheat Search */


/* Quick Menu > Cheats > Load Cheat File (Replace) */


/* Quick Menu > Cheats > Load Cheat File (Append) */


/* Quick Menu > Cheats > Cheat Details */


/* Quick Menu > Disc Control */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_TRAY_INSERT,
   "Thêm đĩa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_INDEX,
   "Chỉ số đĩa"
   )

/* Quick Menu > Shaders */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE,
   "Xoá"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE,
   "Remove shader presets of a specific type."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_APPLY_CHANGES,
   "Áp dụng Changes"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PARAMETERS,
   "Preview Shader Parameters"
   )

/* Quick Menu > Shaders > Save */




/* Quick Menu > Shaders > Remove */


/* Quick Menu > Shaders > Shader Parameters */


/* Quick Menu > Overrides */


/* Quick Menu > Achievements */


/* Quick Menu > Information */


/* Miscellaneous UI Items */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_BACK,
   "Trở lại"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_NOT_FOUND,
   "Không tìm thấy thư mục."
   )

/* Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_CONTENT,
   "<Mục nội dung>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_DEFAULT,
   "<Mặc định>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_NONE,
   "<Không có gì>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_SCREENSHOTS,
   "Screenshot Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISABLED,
   "Vô hiệu hoá"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_LOCKED_ENTRY,
   "Đã khóa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNLOCKED_ENTRY,
   "Đã mở"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME_USE_CONTENT_DIR,
   "<Mục nội dung>"
   )

/* RGUI: Settings > User Interface > Appearance */


/* RGUI: Settings Options */


/* XMB: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DYNAMIC_WALLPAPER,
   "Nền năng động"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_THEME,
   "Select a different theme for the icon. Changes will take effect after you restart the program."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_SHADOWS_ENABLE,
   "Kích hoạt Icon Shadows"
   )

/* XMB: Settings Options */


/* Ozone: Settings > User Interface > Appearance */


/* MaterialUI: Settings > User Interface > Appearance */


/* MaterialUI: Settings Options */


/* Qt (Desktop Menu) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_INFO,
   "Thông tin"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE_LOAD_CORE,
   "&Tải Core..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_SHADER_PARAMS,
   "Preview Shader Parameters"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_TITLE,
   "Thiết lập"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP,
   "&Trợ giúp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOAD_CORE,
   "Tải Core"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_PLAYLISTS,
   "Playlists Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_SCREENSHOT,
   "Screenshot Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE,
   "Core Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_INFO,
   "Core Info Danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_INFORMATION,
   "Thông tin"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DELETE_PLAYLIST,
   "Xoá danh mục"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_CORE,
   "Core Danh mục:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_DATABASE,
   "Mục cơ sở dữ liệu nội dung:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_REMOVE,
   "Xoá"
   )

/* Unsorted */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_SETTINGS,
   "Cập nhật"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_SETTINGS,
   "Tài khoản Cheevos"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_LIST_END,
   "Điểm cuối của danh sách tài khoản"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_SETTINGS,
   "Những thành tựu Retro"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_CONTENT_HISTORY,
   "Lịch sử"
   )

/* Unused (Only Exist in Translation Files) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_BGM_ENABLE,
   "Kích hoạt System BGM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_ENABLE,
   "Enable Recording"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SELECT_FROM_PLAYLIST,
   "Select from Playlst"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ENABLE,
   "Kích hoạt Netplay"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP,
   "Trợ giúp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_AUDIO_VIDEO_TROUBLESHOOTING,
   "Âm thanh/Video Troubleshooting"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_LOADING_CONTENT,
   "Đang tải Content"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANAGEMENT,
   "Database thiết lập"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MODE,
   "Kích hoạt Netplay Client"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SPECTATOR_MODE_ENABLE,
   "Kích hoạt Netplay Spectator"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_DESCRIPTION,
   "Miêu tả"
   )

/* Unused (Needs Confirmation) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIG,
   "Config Danh mục"
   )
MSG_HASH( /* FIXME Seems related to MENU_ENUM_LABEL_VALUE_CORE_ASSETS_DIRECTORY, possible duplicate */
   MENU_ENUM_LABEL_VALUE_CORE_ASSETS_DIR,
   "Mục Downloads"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SETTINGS,
   "Netplay thiết lập"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_DIR,
   "Mục nội dung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ASK_ARCHIVE,
   "Hỏi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS,
   "Trình đơn điều khiển căn bản"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_INFO,
   "Thông tin"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_QUIT,
   "Thoát"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_SCROLL_UP,
   "Cuộn lên"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_START,
   "Những mặc định"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_TOGGLE_KEYBOARD,
   "Bật/tắt bàn phím"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_TOGGLE_MENU,
   "Bật/tắt trình đơn"
   )

/* Discord Status */


/* Notifications */

MSG_HASH(
   MSG_UNKNOWN_NETPLAY_COMMAND_RECEIVED,
   "Netplay không biết lệnh nhận được"
   )
MSG_HASH(
   MSG_FILE_ALREADY_EXISTS_SAVING_TO_BACKUP_BUFFER,
   "Ttệp đã tồn tại. Đang lưu vào backup buffer"
   )
MSG_HASH(
   MSG_WAITING_FOR_CLIENT,
   "Đang đợi máy khách  ..."
   )
MSG_HASH(
   MSG_AUDIO_VOLUME,
   "Âm lượng âm thanh"
   )
MSG_HASH(
   MSG_AUTODETECT,
   "Tự động phát hiện"
   )
MSG_HASH(
   MSG_AUTOLOADING_SAVESTATE_FROM,
   "Đang tự đông tải savestate từ"
   )
MSG_HASH(
   MSG_CONNECTING_TO_NETPLAY_HOST,
   "Đang kết nối vào máy chủ netplay"
   )
MSG_HASH(
   MSG_CONNECTING_TO_PORT,
   "Đang kết nối vào port"
   )
MSG_HASH(
   MSG_CONNECTION_SLOT,
   "Khe kết nối"
   )
MSG_HASH(
   MSG_APPLICATION_DIR,
   "Application Danh mục"
   )
MSG_HASH(
   MSG_APPLYING_CHEAT,
   "Đang áp dụng cheat changes."
   )
MSG_HASH(
   MSG_APPLYING_SHADER,
   "Đang áp dụng shader"
   )
MSG_HASH(
   MSG_AUDIO_MUTED,
   "Âm thanh muted."
   )
MSG_HASH(
   MSG_AUDIO_UNMUTED,
   "Âm thanh unmuted."
   )
MSG_HASH(
   MSG_BRINGING_UP_COMMAND_INTERFACE_ON_PORT,
   "Đang đưa lên lệnh giao diện trên cổng"
   )
MSG_HASH(
   MSG_DISCONNECT_DEVICE_FROM_A_VALID_PORT,
   "Ngắt kết nối thiết bị từ cổng hợp lệ."
   )
MSG_HASH(
   MSG_FAILED_TO_START_AUDIO_DRIVER,
   "Bị lỗi khi chạy chương trình điều khiển âm thanh. Sẽ tiếp tục chạy và bỏ âm thanh."
   )
MSG_HASH(
   MSG_FAILED_TO_TAKE_SCREENSHOT,
   "Bị lỗi khi chụp ảnh màn hình."
   )
MSG_HASH(
   MSG_FAILED_TO_UNMUTE_AUDIO,
   "Failed to unmute Âm thanh."
   )
MSG_HASH(
   MSG_FILE_NOT_FOUND,
   "Không tìm thấy tệp"
   )
MSG_HASH(
   MSG_FOUND_AUTO_SAVESTATE_IN,
   "Tìm thấy savestate tự đông trong"
   )
MSG_HASH(
   MSG_FOUND_LAST_STATE_SLOT,
   "Tiềm thấy state slot xài lần trước"
   )
MSG_HASH(
   MSG_LOADING,
   "Đang tải"
   )
MSG_HASH(
   MSG_LOADING_HISTORY_FILE,
   "Đang nạp tập tin lịch sử"
   )
MSG_HASH(
   MSG_LOADING_STATE,
   "Đang tải state"
   )
MSG_HASH(
   MSG_MOVIE_FILE_IS_NOT_A_VALID_BSV1_FILE,
   "Movie file is not a valid BSV1 file."
   )
MSG_HASH(
   MSG_MOVIE_FORMAT_DIFFERENT_SERIALIZER_VERSION,
   "Movie format seems to have a different serializer version. Will most likely fail."
   )
MSG_HASH(
   MSG_MOVIE_PLAYBACK_ENDED,
   "Movie playback ended."
   )
MSG_HASH(
   MSG_FAST_FORWARD,
   "Nhanh về phía trước."
   )
MSG_HASH(
   MSG_VALUE_CONNECT_DEVICE_FROM_A_VALID_PORT,
   "Kết nối thiết bị từ cổng hợp lệ."
   )
MSG_HASH(
   MSG_VALUE_DISCONNECTING_DEVICE_FROM_PORT,
   "Đang ngắt kết nối thiết bị từ cổng"
   )
MSG_HASH(
   MSG_VALUE_REBOOTING,
   "Đang khởi động lại..."
   )
MSG_HASH(
   MSG_VALUE_SHUTTING_DOWN,
   "Đang tắt máy..."
   )
MSG_HASH(
   MSG_VERSION_OF_LIBRETRO_API,
   "Phiên bản của libretro API"
   )
MSG_HASH(
   MSG_VIEWPORT_SIZE_CALCULATION_FAILED,
   "Viewport size calculation failed! Will continue using raw data. This will probably not work right ..."
   )
MSG_HASH(
   MSG_FAILED,
   "Bị Lỗi"
   )
MSG_HASH(
   MSG_SUCCEEDED,
   "Đã thành công"
   )

/* Lakka */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_LAKKA,
   "Cập nhật Lakka"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REBOOT,
   "Khởi động lại"
   )

/* Environment Specific Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHUTDOWN,
   "Tắt Máy"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SOFT_FILTER,
   "Kích hoạt Soft Filter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BLUETOOTH_SETTINGS,
   "Kích hoạt Bluetooth"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_SETTINGS,
   "Wi-Fi Driver"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TOUCH_ENABLE,
   "Kích hoạt Touch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SMALL_KEYBOARD_ENABLE,
   "Small Keyboard Enable"
   )

#ifdef HAVE_LAKKA_SWITCH
#endif
#if defined(HAVE_LAKKA_SWITCH) || defined(HAVE_LIBNX)
#endif
#ifdef HAVE_LAKKA
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BLUETOOTH_ENABLE,
   "Kích hoạt Bluetooth"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SERVICES_SETTINGS,
   "Quản lý dịch vụ của hệ điều hành."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAMBA_ENABLE,
   "Kích hoạt SAMBA"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAMBA_ENABLE,
   "Bật/tắt chia sẻ thư mục trên mạng."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SSH_ENABLE,
   "Kích hoạt SSH"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SSH_ENABLE,
   "Bật/tắt giao thức SSH."
   )
#endif
#ifdef GEKKO
#endif
#ifdef HAVE_ODROIDGO2
#else
#endif
#if defined(_3DS)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_3DS_LCD_BOTTOM,
   "Màn hình dưới 3DS"
   )
#endif
#ifdef HAVE_QT
#endif
