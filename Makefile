CC=gcc

all: open_file offset_test
.PHONY:all clean

open_file:open_file.c
	$(CC)  open_file.c -o open_file
creat:creat.c
	$(CC)  creat.c -o creat
offset_test:offset_test.c
	$(CC)  offset_test.c -o offset_test
clean:
	rm open_file creat offset_test
