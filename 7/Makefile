CC = g++
CFLAGS = -Wall -Wextra -o
OBJ = main.o shape.o twoDimensionalShape.o threeDimensionalShape.o circle.o rectangle.o square.o triangle.o test.o
NAME = 7assignment

build: $(OBJ)
	$(CC) $(CFLAGS) $(NAME) $(OBJ)
	rm $(OBJ)

main.o: main.cpp
	$(CC) -c $(CFLAGS) main.o main.cpp

shape.o: Shape.cpp
	$(CC) -c $(CFLAGS) shape.o Shape.cpp

twoDimensionalShape.o: TwoDimensionalShape.cpp
	$(CC) -c $(CFLAGS) twoDimensionalShape.o TwoDimensionalShape.cpp

threeDimensionalShape.o: ThreeDimensionalShape.cpp
	$(CC) -c $(CFLAGS) threeDimensionalShape.o ThreeDimensionalShape.cpp

circle.o: Circle.cpp
	$(CC) -c $(CFLAGS) circle.o Circle.cpp

rectangle.o: Rectangle.cpp
	$(CC) -c $(CFLAGS) rectangle.o Rectangle.cpp

square.o: Square.cpp
	$(CC) -c $(CFLAGS) square.o Square.cpp

triangle.o: Triangle.cpp
	$(CC) -c $(CFLAGS) triangle.o Triangle.cpp

test.o: test.cpp
	$(CC) -c $(CFLAGS) test.o test.cpp


clean:
	rm $(OBJ)