INC_LOCAL=$(addprefix -I,$(OPERATION_INC))

$(BUILD_DIR)/operation.o: operation.c $(OPERATION_INC)/operation.h
	$(CC) $(CFLAGS) -o $@ $(INC_LOCAL) -c operation.c