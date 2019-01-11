CC = g++
CFLAGS = -Wall -Wextra -o
OBJ =  main.o account.o
NAME = 9assignment


build: $(OBJ)
	g++ $(CFLAGS) $(NAME) $(OBJ)
	rm *.o
	./$(NAME)

main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.o main.cpp

account.o: Account.cpp
	$(CC) -c $(CFLAGS) account.o Account.cpp
