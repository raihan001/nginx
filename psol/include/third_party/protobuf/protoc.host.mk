# This file is generated by gyp; do not edit.

TOOLSET := host
TARGET := protoc
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
	-Wno-deprecated

INCS_Debug := \
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
	-Wno-deprecated

INCS_Debug_Coverage := \
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
	-Wno-deprecated

INCS_Release := \
	-Ithird_party/chromium/src \
	-Ithird_party/protobuf \
	-Ithird_party/protobuf/src/src

OBJS := \
	$(obj).host/$(TARGET)/third_party/protobuf/src/src/google/protobuf/compiler/main.o

# Add to the list of files we specially track dependencies for.
all_deps += $(OBJS)

# Make sure our dependencies are built before any of us.
$(OBJS): | $(obj).host/third_party/protobuf/libprotoc_lib.a $(obj).host/third_party/protobuf/libprotobuf_full_do_not_use.a

# CFLAGS et al overrides must be target-local.
# See "Target-specific Variable Values" in the GNU Make manual.
$(OBJS): TOOLSET := $(TOOLSET)
$(OBJS): GYP_CFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_C_$(BUILDTYPE))
$(OBJS): GYP_CXXFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_CC_$(BUILDTYPE))

# Suffix rules, putting all outputs into $(obj).

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(srcdir)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

# Try building from generated source, too.

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj).$(TOOLSET)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

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
	

$(builddir)/protoc: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(builddir)/protoc: LIBS := $(LIBS)
$(builddir)/protoc: LD_INPUTS := $(OBJS) $(obj).host/third_party/protobuf/libprotoc_lib.a $(obj).host/third_party/protobuf/libprotobuf_full_do_not_use.a
$(builddir)/protoc: TOOLSET := $(TOOLSET)
$(builddir)/protoc: $(OBJS) $(obj).host/third_party/protobuf/libprotoc_lib.a $(obj).host/third_party/protobuf/libprotobuf_full_do_not_use.a FORCE_DO_CMD
	$(call do_cmd,link)

all_deps += $(builddir)/protoc
# Add target alias
.PHONY: protoc
protoc: $(builddir)/protoc

# Add executable to "all" target.
.PHONY: all
all: $(builddir)/protoc

