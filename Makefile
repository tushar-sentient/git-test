CC=gcc
COMPILE=-c
LINK=-o

a.out : *.o
	$(CC) $(LINK) a.out *.o

*.o : *.c
	$(CC) $(COMPILE) *.c

clean:
	rm -rf *.o a.out
