CC= g++
CFLAGS = -o
OBJ = main.o sparseVector.o vectorElement.o test.o
NAME = 6assignment

build: $(OBJ)
	$(CC) $(CFLAGS) $(NAME) $(OBJ)
	rm $(OBJ)

main.o: Main.cpp
	$(CC) -c $(CFLAGS) main.o Main.cpp

sparseVector.o: SparseVector.cpp
	$(CC) -c $(CFLAGS) sparseVector.o SparseVector.cpp

vectorElement.o: VectorElement.cpp
	$(CC) -c $(CFLAGS) vectorElement.o VectorElement.cpp

test.o: test.cpp
	$(CC) -c $(CFLAGS) test.o test.cpp


clean:
	rm $(OBJ)