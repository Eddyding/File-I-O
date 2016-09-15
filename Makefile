CC=gcc

all: open_file
.PHONY:all clean

open_file:open_file.c
	$(CC)  open_file.c -o open_file
clean:
	rm open_file
