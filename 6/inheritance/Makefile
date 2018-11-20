CC = g++
CFLAGS = -Wall -Wextra -o
OBJ =  main.o boat.o car.o vehicle.o amphibiousCar.o
NAME = 6assignment


build: $(OBJ)
	$(CC) $(CFLAGS) $(NAME) $(OBJ)
	rm *.o

main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.o main.cpp

boat.o: Boat.cpp
	$(CC) -c $(CFLAGS) boat.o Boat.cpp

car.o: Car.cpp
	$(CC) -c $(CFLAGS) car.o Car.cpp

vehicle.o: Vehicle.cpp
	$(CC) -c $(CFLAGS) vehicle.o Vehicle.cpp

amphibiousCar.o: AmphibiousCar.cpp
	$(CC) -c $(CFLAGS) amphibiousCar.o AmphibiousCar.cpp

clean:
	rm *.o
