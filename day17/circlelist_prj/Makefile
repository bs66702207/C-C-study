CFLAGS =
INCLUDE =
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))

TARGET = main

%.o : %.c	
	gcc -o $@ $< -c $(CFLAGS) $(INCLUDE)

$(TARGET): $(OBJS)
	gcc $^ -o $@
clean:
	rm -rf *.o $(TARGET)
