INC_LOCAL=$(addprefix -I,$(FORCE_INC))

$(BUILD_DIR)/force.o: force.c $(FORCE_INC)/force.h
	$(CC) $(CFLAGS) -o $@ $(INC_LOCAL) -c force.c