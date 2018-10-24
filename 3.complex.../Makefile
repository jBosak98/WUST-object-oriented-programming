CC = g++
CFLAGS = -o
DEPS = Date/date.h Date/valuesDate.h Date/testDate.h
OBJ =  main.o testDate.o date.o toolsDate.o ilustrateDate.o testComplex.o complex.o time.o testTime.o ilustrateTime.o ilustrateComplex.o
NAME = 3assignment

build: $(OBJ)
	g++ $(CFLAGS) $(NAME) $(OBJ)
	rm *.o

main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.o main.cpp

ilustrateDate.o: ilustrateDate.cpp
	$(CC) -c $(CFLAGS) ilustrateDate.o ilustrateDate.cpp

ilustrateTime.o: ilustrateTime.cpp
	$(CC) -c $(CFLAGS) ilustrateTime.o ilustrateTime.cpp

date.o: Date/date.cpp
	$(CC) -c $(CFLAGS) date.o Date/date.cpp 

testDate.o: Date/testDate.cpp
	$(CC) -c $(CFLAGS) testDate.o Date/testDate.cpp

toolsDate.o: Date/toolsDate.cpp
	$(CC) -c $(CFLAGS) toolsDate.o Date/toolsDate.cpp

complex.o: Complex/complex.cpp
	$(CC) -c $(CFLAGS) complex.o Complex/complex.cpp 

testComplex.o: Complex/testComplex.cpp
	$(CC) -c $(CFLAGS) testComplex.o Complex/testComplex.cpp 

time.o: Time/time.cpp
	$(CC) -c $(CFLAGS) time.o Time/time.cpp 

testTime.o: Time/testTime.cpp
	$(CC) -c $(CFLAGS) testTime.o Time/testTime.cpp 

ilustrateComplex.o: ilustrateComplex.cpp
	$(CC) -c $(CFLAGS) ilustrateComplex.o ilustrateComplex.cpp

remove:
	rm *.o