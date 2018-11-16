CC = g++
CFLAGS = -Wall -Wextra -o
OBJ =  main.o bus.o car.o vehicle.o
NAME = 4assignment


build: $(OBJ)
	g++ $(CFLAGS) $(NAME) $(OBJ)
	rm *.o

main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.o main.cpp

bus.o: Bus.cpp
	$(CC) -c $(CFLAGS) bus.o Bus.cpp

car.o: Car.cpp
	$(CC) -c $(CFLAGS) car.o Car.cpp

vehicle.o: Vehicle.cpp
	$(CC) -c $(CFLAGS) vehicle.o Vehicle.cpp


clean:
	rm *.o
