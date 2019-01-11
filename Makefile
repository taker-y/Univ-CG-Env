CC = cc
CFLAGS = -I../include -L../lib
LDLIBS = -lm -limgio -ljpeg -lX11
a.out:*.c
	$(CC) $^ $(CFLAGS) $(LDLIBS) -o $@

