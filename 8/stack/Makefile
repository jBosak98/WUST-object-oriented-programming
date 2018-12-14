CC = g++
CFLAGS = -Wall -Wextra -o
OBJ = main.o stack.o
NAME = 8assignment

build: $(OBJ)
	$(CC) $(CFLAGS) $(NAME) $(OBJ)
	rm $(OBJ)

main.o: main.cpp
	$(CC) -c $(CFLAGS) main.o main.cpp

stack.o: Stack.cpp
	$(CC) -c $(CFLAGS) stack.o Stack.cpp

clean:
	rm $(OBJ)