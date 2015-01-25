CFLAGS = -fpermissive
INCLUDE =
SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

TARGET = main

%.o : %.cpp	
	g++ -o $@ $< -c $(CFLAGS) $(INCLUDE)

$(TARGET): $(OBJS)
	g++ $^ -o $@
clean:
	rm -rf *.o $(TARGET)
