.POSIX:

PREFIX = /usr/local
CC=cc
# Uncomment for OpenBSD
#X11INC = /usr/X11R6/include
#X11LIB = /usr/X11R6/lib

options:
	@echo dwmblocks build options:
	@echo "CFLAGS   = $(CFLAGS)"
	@echo "LDFLAGS  = $(LDFLAGS)"
	@echo "CC       = $(CC)"

.c.o:
	$(CC) -c $(CFLAGS) $<

dwmblocks: dwmblocks.o
	$(CC) dwmblocks.o -lX11 -L$(X11LIB) -I$(X11INC) -o dwmblocks
dwmblocks.o: dwmblocks.c config.h
	$(CC) -c dwmblocks.c -L$(X11LIB) -I$(X11INC)
clean:
	rm -f *.o *.gch dwmblocks
install: dwmblocks
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f dwmblocks $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/dwmblocks
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks

.PHONY: clean install uninstall
