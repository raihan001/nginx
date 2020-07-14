# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := statistics_js_opt
### Generated for rule _usr_src_modpagespeed_net_instaweb_instaweb_gyp_statistics_js_opt_target_closure:
$(obj)/gen/closure_out/instaweb/system/statistics_opt.js: obj := $(abs_obj)
$(obj)/gen/closure_out/instaweb/system/statistics_opt.js: builddir := $(abs_builddir)
$(obj)/gen/closure_out/instaweb/system/statistics_opt.js: TOOLSET := $(TOOLSET)
$(obj)/gen/closure_out/instaweb/system/statistics_opt.js: pagespeed/system/statistics.js FORCE_DO_CMD
	$(call do_cmd,_usr_src_modpagespeed_net_instaweb_instaweb_gyp_statistics_js_opt_target_closure_0)

all_deps += $(obj)/gen/closure_out/instaweb/system/statistics_opt.js
cmd__usr_src_modpagespeed_net_instaweb_instaweb_gyp_statistics_js_opt_target_closure_0 = LD_LIBRARY_PATH=$(builddir)/lib.host:$(builddir)/lib.target:$$LD_LIBRARY_PATH; export LD_LIBRARY_PATH; cd net/instaweb; mkdir -p $(obj)/gen/closure_out/instaweb/system; cp ../../net/instaweb/genfiles/system/statistics_opt.js "$(obj)/gen/closure_out/instaweb/system/statistics_opt.js"
quiet_cmd__usr_src_modpagespeed_net_instaweb_instaweb_gyp_statistics_js_opt_target_closure_0 = RULE _usr_src_modpagespeed_net_instaweb_instaweb_gyp_statistics_js_opt_target_closure_0 $@

rule__usr_src_modpagespeed_net_instaweb_instaweb_gyp_statistics_js_opt_target_closure_outputs := \
	$(obj)/gen/closure_out/instaweb/system/statistics_opt.js

### Finished generating for rule: _usr_src_modpagespeed_net_instaweb_instaweb_gyp_statistics_js_opt_target_closure

### Finished generating for all rules

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
	'-D__STDC_CONSTANT_MACROS' \
	'-D__STDC_FORMAT_MACROS' \
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
	-Wall \
	-Wno-unused-parameter \
	-Wno-missing-field-initializers \
	-fvisibility=hidden \
	-pipe \
	-fPIC \
	-Wno-unused-local-typedefs \
	-fexceptions \
	-fasynchronous-unwind-tables \
	-D_FORTIFY_SOURCE=2 \
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
	-D_FORTIFY_SOURCE=2

INCS_Debug := \
	-Ithird_party/chromium/src

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
	'-D__STDC_CONSTANT_MACROS' \
	'-D__STDC_FORMAT_MACROS' \
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
	-Wall \
	-Wno-unused-parameter \
	-Wno-missing-field-initializers \
	-fvisibility=hidden \
	-pipe \
	-fPIC \
	-Wno-unused-local-typedefs \
	-fexceptions \
	-fasynchronous-unwind-tables \
	-D_FORTIFY_SOURCE=2 \
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
	-D_FORTIFY_SOURCE=2

INCS_Debug_Coverage := \
	-Ithird_party/chromium/src

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
	'-D__STDC_CONSTANT_MACROS' \
	'-D__STDC_FORMAT_MACROS' \
	'-DNDEBUG' \
	'-DNVALGRIND' \
	'-DDYNAMIC_ANNOTATIONS_ENABLED=0' \
	'-D_FORTIFY_SOURCE=2'

# Flags passed to all source files.
CFLAGS_Release := \
	-fstack-protector \
	--param=ssp-buffer-size=4 \
	-pthread \
	-fno-exceptions \
	-fno-strict-aliasing \
	-Wall \
	-Wno-unused-parameter \
	-Wno-missing-field-initializers \
	-fvisibility=hidden \
	-pipe \
	-fPIC \
	-Wno-unused-local-typedefs \
	-fexceptions \
	-fasynchronous-unwind-tables \
	-D_FORTIFY_SOURCE=2 \
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
	-D_FORTIFY_SOURCE=2

INCS_Release := \
	-Ithird_party/chromium/src

OBJS :=

# Add to the list of files we specially track dependencies for.
all_deps += $(OBJS)

# Make sure our dependencies are built before any of us.
$(OBJS): | $(obj).target/net/instaweb/download_closure.stamp

# Make sure our actions/rules run before any of us.
$(OBJS): | $(rule__usr_src_modpagespeed_net_instaweb_instaweb_gyp_statistics_js_opt_target_closure_outputs)


### Rules for final target.
# Build our special outputs first.
$(obj).target/net/instaweb/libstatistics_js_opt.a: | $(rule__usr_src_modpagespeed_net_instaweb_instaweb_gyp_statistics_js_opt_target_closure_outputs)

# Preserve order dependency of special output on deps.
$(rule__usr_src_modpagespeed_net_instaweb_instaweb_gyp_statistics_js_opt_target_closure_outputs): | $(obj).target/net/instaweb/download_closure.stamp

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
	

$(obj).target/net/instaweb/libstatistics_js_opt.a: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(obj).target/net/instaweb/libstatistics_js_opt.a: LIBS := $(LIBS)
$(obj).target/net/instaweb/libstatistics_js_opt.a: TOOLSET := $(TOOLSET)
$(obj).target/net/instaweb/libstatistics_js_opt.a:  FORCE_DO_CMD
	$(call do_cmd,alink_thin)

all_deps += $(obj).target/net/instaweb/libstatistics_js_opt.a
# Add target alias
.PHONY: statistics_js_opt
statistics_js_opt: $(obj).target/net/instaweb/libstatistics_js_opt.a

# Add target alias to "all" target.
.PHONY: all
all: statistics_js_opt

