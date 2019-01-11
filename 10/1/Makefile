CC = g++
CFLAGS = -Wall -Wextra -o
OBJ = main.o stack.o node.o calculator.o calcelement.o npn.o tools.o test.o
NAME = 10assignment

build: $(OBJ)
	$(CC) $(CFLAGS) $(NAME) $(OBJ)
	rm $(OBJ)

main.o: main.cpp
	$(CC) -c $(CFLAGS) main.o main.cpp

stack.o: Stack.cpp
	$(CC) -c $(CFLAGS) stack.o Stack.cpp

node.o: Node.cpp
	$(CC) -c $(CFLAGS) node.o Node.cpp

calculator.o: Calculator.cpp
	$(CC) -c $(CFLAGS) calculator.o Calculator.cpp

calcelement.o: CalcElement.cpp
	$(CC) -c $(CFLAGS) calcelement.o CalcElement.cpp

npn.o: NPN.cpp
	$(CC) -c $(CFLAGS) npn.o NPN.cpp

tools.o: Tools.cpp
	$(CC) -c $(CFLAGS) tools.o Tools.cpp

test.o: Test.cpp
	$(CC) -c $(CFLAGS) test.o Test.cpp


clean:
	rm $(OBJ)