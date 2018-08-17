export CC:=gcc
export AR:=ar
export ECHO:=echo
export RM:=rm
export MKDIR:=mkdir
export BUILD_DIR:=$(CURDIR)/build
export LIBS_DIR:=$(CURDIR)/lib
export LIBINC:=$(LIBS_DIR)/inc
export APP=main
export CFLAGS=
export OBJS:=
export LIBS:=
export VOLUME_INC=$(CURDIR)/inc/volume
export INC=$(CURDIR)/lib/inc $(VOLUME_INC)
.PHONY: all
all: $(BUILD_DIR)/$(APP)


$(BUILD_DIR)/$(APP):
	@$(ECHO) "Starting build"
	@$(ECHO) "$(BUILD_DIR)"
	@if [ -d $(BUILD_DIR) ];then \
		$(ECHO) "$(BUILD_DIR) already exists"; \
	else \
		$(MKDIR) $(BUILD_DIR); \
	fi
	
	$(MAKE) $(APP) -C src
 
.PHONY: clean
clean:
	$(RM) -rf build