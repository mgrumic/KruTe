INC_LOCAL=$(addprefix -I,$(SUB_INC))

$(BUILD_DIR)/sub.o: sub.c $(SUB_INC)/sub.h
	$(CC) $(CFLAGS) -o $@ $(INC_LOCAL) -c sub.c