CC = g++
CFLAGS = -Wall -Wextra -o
OBJ =  main.o Vehicle.o Car.o Bus.o
NAME = 4assignment


build: $(OBJ)
	g++ $(CFLAGS) $(NAME) $(OBJ)
	rm *.o

main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.o main.cpp

Vehicle.o: Vehicle.cpp 
	$(CC) -c $(CFLAGS) Vehicle.o Vehicle.cpp

Car.o: Car.cpp 
	$(CC) -c $(CFLAGS) Car.o Car.cpp

Bus.o: Bus.cpp 
	$(CC) -c $(CFLAGS) Bus.o Bus.cpp

clean:
	rm *.o