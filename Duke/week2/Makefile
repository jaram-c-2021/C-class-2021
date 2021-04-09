CC = gcc
CFAGS = -W -Wall
TARGET = auto
OBJECTS = print.o main.o compare.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
	
clean :
	rm *.o auto
	
