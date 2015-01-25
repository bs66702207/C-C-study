CFLAGS = -L./ -lsocketclientdll -fpermissive 
INCLUDE =
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))
LIBS = libsocketclientdll.so

TARGET = main

$(TARGET): main.c $(LIBS)
	g++ $^ $(CFLAGS) -o $@

$(LIBS) : socketclientdll.c
	g++ socketclientdll.c -fPIC -shared -o $@

clean:
	rm -rf *.o $(TARGET) 
rmlib:
	rm -rf $(LIBS)
