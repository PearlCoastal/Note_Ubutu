OBJ=gets
CC=gcc
CFLAGS=-c 

$(OBJ):gets.o
	$(CC) $< -o $@

gets.o:gets.c
	$(CC) $(CFLAGS) $< -o $@

.PHONY:
	clean

clean:
	$(RM) *.o $(OBJ)

