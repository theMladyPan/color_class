CC=g++
CFLAGS=-Wall -std=c++11
TARGET=test

all:$(TARGET)

$(TARGET): color.o $(TARGET).o
	$(CC) $(CFLAGS) -o $(TARGET) color.o $(TARGET).o
	@echo Succesfully compiled.		

color.o: color.cpp color.h
	$(CC) $(CFLAGS) -c color.cpp

$(TARGET).o: $(TARGET).cpp
	$(CC) $(CFLAGS) -c $(TARGET).cpp

clean: 
	$(RM) $(TARGET) *.o
