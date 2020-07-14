# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := grpc_cpp
DEFS_Debug := \
	'-D_GLIBCXX_USE_CXX11_ABI=0' \
	'-DV8_DEPRECATION_WARNINGS' \
	'-DBLINK_SCALE_FILTERS_AT_RECORD_TIME' \
	'-D_FILE_OFFSET_BITS=64' \
	'-DPAGESPEED_SUPPORT_POSIX_SHARED_MEM' \
	'-DGTEST_HAS_RTTI=1' \
	'-DCHROMIUM_BUILD' \
	'-DTOOLKIT_VIEWS=1' \
	'-DUI_COMPOSITOR_IMAGE_TRANSPORT' \
	'-DUSE_AURA=1' \
	'-DUSE_CAIRO=1' \
	'-DUSE_GLIB=1' \
	'-DUSE_DEFAULT_RENDER_THEME=1' \
	'-DUSE_LIBJPEG_TURBO=1' \
	'-DUSE_NSS=1' \
	'-DUSE_X11=1' \
	'-DUSE_CLIPBOARD_AURAX11=1' \
	'-DENABLE_ONE_CLICK_SIGNIN' \
	'-DUSE_XI2_MT=2' \
	'-DENABLE_REMOTING=1' \
	'-DENABLE_WEBRTC=1' \
	'-DENABLE_PEPPER_CDMS' \
	'-DENABLE_CONFIGURATION_POLICY' \
	'-DENABLE_INPUT_SPEECH' \
	'-DENABLE_NOTIFICATIONS' \
	'-DENABLE_NEW_GAMEPAD_API=1' \
	'-DUSE_UDEV' \
	'-DENABLE_EGLIMAGE=1' \
	'-DENABLE_TASK_MANAGER=1' \
	'-DENABLE_EXTENSIONS=1' \
	'-DENABLE_PLUGIN_INSTALLATION=1' \
	'-DENABLE_PLUGINS=1' \
	'-DENABLE_SESSION_SERVICE=1' \
	'-DENABLE_THEMES=1' \
	'-DENABLE_AUTOFILL_DIALOG=1' \
	'-DENABLE_BACKGROUND=1' \
	'-DENABLE_AUTOMATION=1' \
	'-DENABLE_GOOGLE_NOW=1' \
	'-DCLD_VERSION=2' \
	'-DENABLE_FULL_PRINTING=1' \
	'-DENABLE_PRINTING=1' \
	'-DENABLE_SPELLCHECK=1' \
	'-DENABLE_CAPTIVE_PORTAL_DETECTION=1' \
	'-DENABLE_APP_LIST=1' \
	'-DENABLE_SETTINGS_APP=1' \
	'-DENABLE_MANAGED_USERS=1' \
	'-DENABLE_MDNS=1' \
	'-DPROTOBUF_USE_DLLS' \
	'-DGOOGLE_PROTOBUF_NO_STATIC_INITIALIZER' \
	'-DDYNAMIC_ANNOTATIONS_ENABLED=1' \
	'-DWTF_USE_DYNAMIC_ANNOTATIONS=1' \
	'-D_DEBUG'

# Flags passed to all source files.
CFLAGS_Debug := \
	-fstack-protector \
	--param=ssp-buffer-size=4 \
	-pthread \
	-fno-exceptions \
	-fno-strict-aliasing \
	-Wno-unused-parameter \
	-Wno-missing-field-initializers \
	-fvisibility=hidden \
	-pipe \
	-fPIC \
	-Wno-unused-local-typedefs \
	-fexceptions \
	-fasynchronous-unwind-tables \
	-D_FORTIFY_SOURCE=2 \
	-Wno-format \
	-Wno-unused-result \
	-O0 \
	-g \
	-funwind-tables

# Flags passed to only C files.
CFLAGS_C_Debug :=

# Flags passed to only C++ files.
CFLAGS_CC_Debug := \
	-std=gnu++0x \
	-fno-threadsafe-statics \
	-fvisibility-inlines-hidden \
	-frtti \
	-D_FORTIFY_SOURCE=2 \
	-Wall \
	-pthread \
	-zdefs \
	-Wno-error=deprecated-declarations \
	-Wno-deprecated

INCS_Debug := \
	-Ithird_party/grpc/src \
	-Ithird_party/grpc/src/include \
	-Ithird_party/chromium/src \
	-Ithird_party/protobuf \
	-Ithird_party/protobuf/src/src

DEFS_Debug_Coverage := \
	'-D_GLIBCXX_USE_CXX11_ABI=0' \
	'-DV8_DEPRECATION_WARNINGS' \
	'-DBLINK_SCALE_FILTERS_AT_RECORD_TIME' \
	'-D_FILE_OFFSET_BITS=64' \
	'-DPAGESPEED_SUPPORT_POSIX_SHARED_MEM' \
	'-DGTEST_HAS_RTTI=1' \
	'-DCHROMIUM_BUILD' \
	'-DTOOLKIT_VIEWS=1' \
	'-DUI_COMPOSITOR_IMAGE_TRANSPORT' \
	'-DUSE_AURA=1' \
	'-DUSE_CAIRO=1' \
	'-DUSE_GLIB=1' \
	'-DUSE_DEFAULT_RENDER_THEME=1' \
	'-DUSE_LIBJPEG_TURBO=1' \
	'-DUSE_NSS=1' \
	'-DUSE_X11=1' \
	'-DUSE_CLIPBOARD_AURAX11=1' \
	'-DENABLE_ONE_CLICK_SIGNIN' \
	'-DUSE_XI2_MT=2' \
	'-DENABLE_REMOTING=1' \
	'-DENABLE_WEBRTC=1' \
	'-DENABLE_PEPPER_CDMS' \
	'-DENABLE_CONFIGURATION_POLICY' \
	'-DENABLE_INPUT_SPEECH' \
	'-DENABLE_NOTIFICATIONS' \
	'-DENABLE_NEW_GAMEPAD_API=1' \
	'-DUSE_UDEV' \
	'-DENABLE_EGLIMAGE=1' \
	'-DENABLE_TASK_MANAGER=1' \
	'-DENABLE_EXTENSIONS=1' \
	'-DENABLE_PLUGIN_INSTALLATION=1' \
	'-DENABLE_PLUGINS=1' \
	'-DENABLE_SESSION_SERVICE=1' \
	'-DENABLE_THEMES=1' \
	'-DENABLE_AUTOFILL_DIALOG=1' \
	'-DENABLE_BACKGROUND=1' \
	'-DENABLE_AUTOMATION=1' \
	'-DENABLE_GOOGLE_NOW=1' \
	'-DCLD_VERSION=2' \
	'-DENABLE_FULL_PRINTING=1' \
	'-DENABLE_PRINTING=1' \
	'-DENABLE_SPELLCHECK=1' \
	'-DENABLE_CAPTIVE_PORTAL_DETECTION=1' \
	'-DENABLE_APP_LIST=1' \
	'-DENABLE_SETTINGS_APP=1' \
	'-DENABLE_MANAGED_USERS=1' \
	'-DENABLE_MDNS=1' \
	'-DPROTOBUF_USE_DLLS' \
	'-DGOOGLE_PROTOBUF_NO_STATIC_INITIALIZER' \
	'-DDYNAMIC_ANNOTATIONS_ENABLED=1' \
	'-DWTF_USE_DYNAMIC_ANNOTATIONS=1' \
	'-D_DEBUG'

# Flags passed to all source files.
CFLAGS_Debug_Coverage := \
	-fstack-protector \
	--param=ssp-buffer-size=4 \
	-pthread \
	-fno-exceptions \
	-fno-strict-aliasing \
	-Wno-unused-parameter \
	-Wno-missing-field-initializers \
	-fvisibility=hidden \
	-pipe \
	-fPIC \
	-Wno-unused-local-typedefs \
	-fexceptions \
	-fasynchronous-unwind-tables \
	-D_FORTIFY_SOURCE=2 \
	-Wno-format \
	-Wno-unused-result \
	-O0 \
	-g \
	-funwind-tables \
	-ftest-coverage \
	-fprofile-arcs

# Flags passed to only C files.
CFLAGS_C_Debug_Coverage :=

# Flags passed to only C++ files.
CFLAGS_CC_Debug_Coverage := \
	-std=gnu++0x \
	-fno-threadsafe-statics \
	-fvisibility-inlines-hidden \
	-frtti \
	-D_FORTIFY_SOURCE=2 \
	-Wall \
	-pthread \
	-zdefs \
	-Wno-error=deprecated-declarations \
	-Wno-deprecated

INCS_Debug_Coverage := \
	-Ithird_party/grpc/src \
	-Ithird_party/grpc/src/include \
	-Ithird_party/chromium/src \
	-Ithird_party/protobuf \
	-Ithird_party/protobuf/src/src

DEFS_Release := \
	'-D_GLIBCXX_USE_CXX11_ABI=0' \
	'-DV8_DEPRECATION_WARNINGS' \
	'-DBLINK_SCALE_FILTERS_AT_RECORD_TIME' \
	'-D_FILE_OFFSET_BITS=64' \
	'-DPAGESPEED_SUPPORT_POSIX_SHARED_MEM' \
	'-DGTEST_HAS_RTTI=1' \
	'-DCHROMIUM_BUILD' \
	'-DTOOLKIT_VIEWS=1' \
	'-DUI_COMPOSITOR_IMAGE_TRANSPORT' \
	'-DUSE_AURA=1' \
	'-DUSE_CAIRO=1' \
	'-DUSE_GLIB=1' \
	'-DUSE_DEFAULT_RENDER_THEME=1' \
	'-DUSE_LIBJPEG_TURBO=1' \
	'-DUSE_NSS=1' \
	'-DUSE_X11=1' \
	'-DUSE_CLIPBOARD_AURAX11=1' \
	'-DENABLE_ONE_CLICK_SIGNIN' \
	'-DUSE_XI2_MT=2' \
	'-DENABLE_REMOTING=1' \
	'-DENABLE_WEBRTC=1' \
	'-DENABLE_PEPPER_CDMS' \
	'-DENABLE_CONFIGURATION_POLICY' \
	'-DENABLE_INPUT_SPEECH' \
	'-DENABLE_NOTIFICATIONS' \
	'-DENABLE_NEW_GAMEPAD_API=1' \
	'-DUSE_UDEV' \
	'-DENABLE_EGLIMAGE=1' \
	'-DENABLE_TASK_MANAGER=1' \
	'-DENABLE_EXTENSIONS=1' \
	'-DENABLE_PLUGIN_INSTALLATION=1' \
	'-DENABLE_PLUGINS=1' \
	'-DENABLE_SESSION_SERVICE=1' \
	'-DENABLE_THEMES=1' \
	'-DENABLE_AUTOFILL_DIALOG=1' \
	'-DENABLE_BACKGROUND=1' \
	'-DENABLE_AUTOMATION=1' \
	'-DENABLE_GOOGLE_NOW=1' \
	'-DCLD_VERSION=2' \
	'-DENABLE_FULL_PRINTING=1' \
	'-DENABLE_PRINTING=1' \
	'-DENABLE_SPELLCHECK=1' \
	'-DENABLE_CAPTIVE_PORTAL_DETECTION=1' \
	'-DENABLE_APP_LIST=1' \
	'-DENABLE_SETTINGS_APP=1' \
	'-DENABLE_MANAGED_USERS=1' \
	'-DENABLE_MDNS=1' \
	'-DPROTOBUF_USE_DLLS' \
	'-DGOOGLE_PROTOBUF_NO_STATIC_INITIALIZER' \
	'-DNDEBUG' \
	'-DNVALGRIND' \
	'-DDYNAMIC_ANNOTATIONS_ENABLED=0'

# Flags passed to all source files.
CFLAGS_Release := \
	-fstack-protector \
	--param=ssp-buffer-size=4 \
	-pthread \
	-fno-exceptions \
	-fno-strict-aliasing \
	-Wno-unused-parameter \
	-Wno-missing-field-initializers \
	-fvisibility=hidden \
	-pipe \
	-fPIC \
	-Wno-unused-local-typedefs \
	-fexceptions \
	-fasynchronous-unwind-tables \
	-D_FORTIFY_SOURCE=2 \
	-Wno-format \
	-Wno-unused-result \
	-O2 \
	-fno-ident \
	-fdata-sections \
	-ffunction-sections \
	-funwind-tables

# Flags passed to only C files.
CFLAGS_C_Release :=

# Flags passed to only C++ files.
CFLAGS_CC_Release := \
	-std=gnu++0x \
	-fno-threadsafe-statics \
	-fvisibility-inlines-hidden \
	-frtti \
	-D_FORTIFY_SOURCE=2 \
	-Wall \
	-pthread \
	-zdefs \
	-Wno-error=deprecated-declarations \
	-Wno-deprecated

INCS_Release := \
	-Ithird_party/grpc/src \
	-Ithird_party/grpc/src/include \
	-Ithird_party/chromium/src \
	-Ithird_party/protobuf \
	-Ithird_party/protobuf/src/src

OBJS := \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/client/insecure_credentials.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/client/secure_credentials.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/common/auth_property_iterator.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/common/secure_auth_context.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/common/secure_channel_arguments.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/common/secure_create_auth_context.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/common/insecure_create_auth_context.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/insecure_server_credentials.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/secure_server_credentials.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/client/channel_cc.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/client/client_context.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/client/create_channel.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/client/create_channel_internal.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/client/create_channel_posix.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/client/credentials_cc.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/client/generic_stub.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/common/channel_arguments.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/common/channel_filter.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/common/completion_queue_cc.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/common/core_codegen.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/common/resource_quota_cc.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/common/rpc_method.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/common/version_cc.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/async_generic_service.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/channel_argument_option.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/create_default_thread_pool.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/dynamic_thread_pool.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/health/default_health_check_service.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/health/health.pb.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/health/health_check_service.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/health/health_check_service_server_builder_option.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/server_builder.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/server_cc.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/server_context.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/server_credentials.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/server/server_posix.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/thread_manager/thread_manager.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/util/byte_buffer_cc.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/util/slice_cc.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/util/status.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/util/string_ref.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/util/time_cc.o \
	$(obj).target/$(TARGET)/third_party/grpc/src/src/cpp/codegen/codegen_init.o

# Add to the list of files we specially track dependencies for.
all_deps += $(OBJS)

# CFLAGS et al overrides must be target-local.
# See "Target-specific Variable Values" in the GNU Make manual.
$(OBJS): TOOLSET := $(TOOLSET)
$(OBJS): GYP_CFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_C_$(BUILDTYPE))
$(OBJS): GYP_CXXFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_CC_$(BUILDTYPE))

# Suffix rules, putting all outputs into $(obj).

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(srcdir)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(srcdir)/%.c FORCE_DO_CMD
	@$(call do_cmd,cc,1)

# Try building from generated source, too.

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj).$(TOOLSET)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj).$(TOOLSET)/%.c FORCE_DO_CMD
	@$(call do_cmd,cc,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj)/%.c FORCE_DO_CMD
	@$(call do_cmd,cc,1)

# End of this set of suffix rules
### Rules for final target.
LDFLAGS_Debug := \
	-Wl,-z,now \
	-Wl,-z,relro \
	-pthread \
	-Wl,-z,noexecstack \
	-fPIC

LDFLAGS_Debug_Coverage := \
	-Wl,-z,now \
	-Wl,-z,relro \
	-pthread \
	-Wl,-z,noexecstack \
	-fPIC \
	-ftest-coverage -fprofile-arcs

LDFLAGS_Release := \
	-Wl,-z,now \
	-Wl,-z,relro \
	-pthread \
	-Wl,-z,noexecstack \
	-fPIC \
	-Wl,-O1 \
	-Wl,--as-needed \
	-Wl,--gc-sections

LIBS := \
	

$(obj).target/third_party/grpc/libgrpc_cpp.a: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(obj).target/third_party/grpc/libgrpc_cpp.a: LIBS := $(LIBS)
$(obj).target/third_party/grpc/libgrpc_cpp.a: TOOLSET := $(TOOLSET)
$(obj).target/third_party/grpc/libgrpc_cpp.a: $(OBJS) FORCE_DO_CMD
	$(call do_cmd,alink_thin)

all_deps += $(obj).target/third_party/grpc/libgrpc_cpp.a
# Add target alias
.PHONY: grpc_cpp
grpc_cpp: $(obj).target/third_party/grpc/libgrpc_cpp.a

# Add target alias to "all" target.
.PHONY: all
all: grpc_cpp

