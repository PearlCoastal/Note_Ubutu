OBJ=main
CC=gcc
CFLAGS=-c

$(OBJ):linklist.o main.o
	$(CC) $^ -o $@

linklist.o:linklist.c
	$(CC) $(CFLAGS) $< -o $@

main.o:main.c
	$(CC) $(CFLAGS) $< -o $@
.PHONY:
	clean

clean:
	$(RM) *.o $(OBJ)
