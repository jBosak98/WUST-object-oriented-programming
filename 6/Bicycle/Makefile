CFLAGS = -Wall -Wextra -o
OBJ = main.o seat.o bicycle.o vehicle.o material.o
NAME = 6assignment

build: $(OBJ)
	g++ $(CFLAGS) $(NAME) $(OBJ)
	rm $(OBJ)

main.o: Main.cpp
	g++ -c $(CFLAGS) main.o Main.cpp

seat.o: Seat.cpp
	g++ -c $(CFLAGS) seat.o Seat.cpp

bicycle.o: Bicycle.cpp
	g++ -c $(CFLAGS) bicycle.o Bicycle.cpp

vehicle.o: Vehicle.cpp
	g++ -c $(CFLAGS) vehicle.o Vehicle.cpp

material.o: Material.cpp
	g++ -c $(CFLAGS) material.o Material.cpp

machine.o: Machine.cpp
	g++ -c $(CFLAGS) machine.o Machine.cpp

clean:
	rm $(OBJ)