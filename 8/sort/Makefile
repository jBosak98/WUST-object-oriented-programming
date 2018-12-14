CC = g++
CFLAGS = -Wall -Wextra -o
OBJ = main.o point.o sort.o
NAME = 8assignment

build: $(OBJ)
	$(CC) $(CFLAGS) $(NAME) $(OBJ)
	rm $(OBJ)

main.o: main.cpp
	$(CC) -c $(CFLAGS) main.o main.cpp

point.o: Point.cpp
	$(CC) -c $(CFLAGS) point.o Point.cpp


sort.o: sort.cpp
	$(CC) -c $(CFLAGS) sort.o sort.cpp

clean:
	rm $(OBJ)