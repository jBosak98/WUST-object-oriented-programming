#include "Test.h"



void startTest(){
	Student s = Student("a","b",5,6);
	assert(s.getFirstName() == "a");
	assert(s.getFamilyName() == "b");
	assert(s.getStudentId() == 5);
	assert(s.getYearOfStudy() == 6);
	assert(s.getYearOfStudy() != 10);
	// std::cout<<s;

	// try{
	// 	Student s2 = Student("a","b",-5,6);
	// } catch (BelowZeroError e){
	// 	e.errorMessage();
	// }

	// try{
	// 	Student s3 = Student("@","b",5,6);
	// } catch (NameError e){
	// 	e.errorMessage();
	// }
}