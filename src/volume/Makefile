INC_LOCAL=$(addprefix -I,$(VOLUME_INC))

$(BUILD_DIR)/volume.o: volume.c $(VOLUME_INC)/volume.h
	$(CC) $(CFLAGS) -o $@ $(INC_LOCAL) -c volume.c