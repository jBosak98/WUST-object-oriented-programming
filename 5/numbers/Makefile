CC = g++
CFLAGS = -Wall -Wextra -o
OBJ =  main.o arabianNumber.o romanNumber.o test.o
NAME = 5assignment


build: $(OBJ)
	g++ $(CFLAGS) $(NAME) $(OBJ)
	rm *.o

main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.o main.cpp

arabianNumber.o: ArabianNumber.cpp
	$(CC) -c $(CFLAGS) arabianNumber.o ArabianNumber.cpp

romanNumber.o: RomanNumber.cpp
	$(CC) -c $(CFLAGS) romanNumber.o RomanNumber.cpp

test.o: test.cpp
	$(CC) -c $(CFLAGS) test.o test.cpp


clean:
	rm *.o

	