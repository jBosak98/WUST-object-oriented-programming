CC = g++
CFLAGS = -Wall -Wextra -o
OBJ =  main.o Rectangle.o Cuboid.o test.o
NAME = 5assignment


build: $(OBJ)
	g++ $(CFLAGS) $(NAME) $(OBJ)
	rm *.o

main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.o main.cpp

Rectangle.o: Rectangle.cpp
	$(CC) -c $(CFLAGS) Rectangle.o Rectangle.cpp

Cuboid.o: Cuboid.cpp
	$(CC) -c $(CFLAGS) Cuboid.o Cuboid.cpp

test.o: test.cpp
	$(CC) -c $(CFLAGS) test.o test.cpp



clean:
	rm *.o

	