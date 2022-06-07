CC=gcc
COMPILE=-c
LINK=-o
LINK_LIBS=-lm

a.out : *.o
	$(CC) $(LINK) a.out *.o $(LINK_LIBS)

*.o : *.c
	$(CC) $(COMPILE) *.c
	$(CC) $(COMPILE) submodule/*.c

clean:
	rm -rf *.o a.out
