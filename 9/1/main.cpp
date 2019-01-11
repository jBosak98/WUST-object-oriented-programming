#include "Test.h"
#include "Student.h"


void createStudent(){
	std::string firstName;
	std::string familyName;
	int id;
	int year;

	std::cout<<"First name: ";
	std::cin>>firstName;
	std::cout<<"Family name: ";
	std::cin>>familyName;
	std::cout<<"Student id: ";
	std::cin>>id;
	std::cout<<"Year of Study: ";
	std::cin>>year;
	
	try{
		Student s = Student(firstName, familyName, id, year);
	} catch(BelowZeroError e){
		e.errorMessage();
	} catch(NameError e){
		e.errorMessage();
	}
}

int
main(){
	// startTest();
	createStudent();
	return 0;
}