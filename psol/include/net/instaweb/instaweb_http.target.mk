# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := instaweb_http
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
	

$(obj).target/net/instaweb/libinstaweb_http.a: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(obj).target/net/instaweb/libinstaweb_http.a: LIBS := $(LIBS)
$(obj).target/net/instaweb/libinstaweb_http.a: TOOLSET := $(TOOLSET)
$(obj).target/net/instaweb/libinstaweb_http.a: $(obj).target/pagespeed/libpagespeed_http.a FORCE_DO_CMD
	$(call do_cmd,alink_thin)

all_deps += $(obj).target/net/instaweb/libinstaweb_http.a
# Add target alias
.PHONY: instaweb_http
instaweb_http: $(obj).target/net/instaweb/libinstaweb_http.a

# Add target alias to "all" target.
.PHONY: all
all: instaweb_http

