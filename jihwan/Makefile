CC = gcc
CFAGS = -W -Wall
TARGET = auto
OBJECTS = a.o main.o large.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o auto
