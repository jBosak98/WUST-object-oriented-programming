CC = g++
CFLAGS = -Wall -Wextra -o
OBJ =  main.o treeElement.o test.o
NAME = liveProgramming


build: $(OBJ)
	g++ $(CFLAGS) $(NAME) $(OBJ)
	rm *.o


main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.o main.cpp


treeElement.o: TreeElement.cpp 
	$(CC) -c $(CFLAGS) treeElement.o TreeElement.cpp


test.o: test.cpp
	$(CC) -c $(CFLAGS) test.o test.cpp



clean:
	rm *.o

	