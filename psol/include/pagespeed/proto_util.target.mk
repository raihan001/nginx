# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := proto_util
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
	

$(obj).target/pagespeed/libproto_util.a: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(obj).target/pagespeed/libproto_util.a: LIBS := $(LIBS)
$(obj).target/pagespeed/libproto_util.a: TOOLSET := $(TOOLSET)
$(obj).target/pagespeed/libproto_util.a:  FORCE_DO_CMD
	$(call do_cmd,alink_thin)

all_deps += $(obj).target/pagespeed/libproto_util.a
# Add target alias
.PHONY: proto_util
proto_util: $(obj).target/pagespeed/libproto_util.a

# Add target alias to "all" target.
.PHONY: all
all: proto_util

