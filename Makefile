CC = gcc
CFLAGS = -Wall
TARGET = helloworld

all: $(TARGET)

$(TARGET): helloworld.c
	$(CC) $(CFLAGS) -o $(TARGET) helloworld.c

clean:
	rm -f $(TARGET)

