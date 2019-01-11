CC = g++
CFLAGS = -Wall -Wextra -o
OBJ =  main.o student.o test.o
NAME = 9assignment


build: $(OBJ)
	g++ $(CFLAGS) $(NAME) $(OBJ)
	rm *.o


main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.o main.cpp

student.o: Student.cpp
	$(CC) -c $(CFLAGS) student.o Student.cpp

test.o: Test.cpp
	$(CC) -c $(CFLAGS) test.o Test.cpp

