all:
	@mkdir -vp bin
	$(CC) $(CFLAGS) -s src/invertrandom.c -o bin/invertrandom
	$(CC) $(CFLAGS) -s src/invert.c -o bin/invert
clean:
	@rm -rvf bin
