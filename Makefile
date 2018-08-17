export CC:=gcc
export AR:=ar
export ECHO:=echo
export RM:=rm
export MKDIR:=mkdir
export BUILD_DIR:=$(shell PWD)/build
export LIBS_DIR:=$(shell PWD)/lib
export LIBINC:=$(LIBS_DIR)/inc
export APP=main
export CFLAGS=
export OBJS:=
export LIBS:=
export VOLUME_INC=$(shell PWD)/inc/volume
export INC=$(shell PWD)/lib/inc $(VOLUME_INC)
.PHONY: all
all: $(BUILD_DIR)/$(APP)


$(BUILD_DIR)/$(APP):
	@$(ECHO) "Starting build"
	
	@if [ -d $(BUILD_DIR) ];then \
		$(ECHO) "$(BUILD_DIR) already exists"; \
	else \
		$(MKDIR) $(BUILD_DIR); \
	fi
	
	$(MAKE) $(APP) -C src
 
.PHONY: clean
clean:
	$(RM) -rf build