CFLAGS = -fpermissive
INCLUDE =
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))

TARGET = main

%.o : %.c	
	g++ -o $@ $< -c $(CFLAGS) $(INCLUDE)

$(TARGET): $(OBJS)
	g++ $^ -o $@
clean:
	rm -rf *.o $(TARGET)
