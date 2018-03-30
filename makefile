# Definitions for constants
CC=g++
CFLAGS = -I. 

# This will create your final output using .o compiled files
make: main.o 
	$(CC) $(CFLAGS) -o main main.o

main.o: main.cpp item.h FrankiesKitchen.h
	$(CC) $(CFLAGS) -c main.cpp -o main.o
	
# This will clean or remove compiled files so you can start fresh
clean:
	rm -f *.o *.exe 

