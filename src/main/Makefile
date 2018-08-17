LIBS_LIST=$(addprefix -l, $(LIBS))
INC_LIST=$(addprefix -I, $(INC))
LIBPATH_LIST=$(addprefix -L, $(LIBS_DIR))
APP_SRC=main.c
APP_OBJ=main.o
OBJS+=$(BUILD_DIR)/$(APP_OBJ)

$(BUILD_DIR)/$(APP): $(OBJS) $(BUILD_DIR)/$(APP_OBJ)
	$(CC) $(OBJS) -o $(BUILD_DIR)/$(APP) $(LIBPATH_LIST) $(LIBS_LIST) 
	
$(BUILD_DIR)/$(APP_OBJ): $(APP_SRC)
	$(CC) $(CFLAGS) $(INC_LIST) -o $(BUILD_DIR)/$(APP_OBJ) -c $(APP_SRC)