#include "Student.h"



Student::Student(std::string firstName, 
				std::string familyName,
				int studentId, 
				int yearOfStudy){


	if(studentId < 0 || yearOfStudy < 0){
		throw BelowZeroError();
	}
	if(!isValidName(firstName) || !isValidName(familyName)){
		throw NameError();
	}
	this->firstName = firstName;
	this->familyName = familyName;
	this->studentId = studentId;
	this->yearOfStudy = yearOfStudy;
}


void Student::NameError::errorMessage(){
	std::cerr<<"ERROR with name\n";
}

void Student::BelowZeroError::errorMessage(){
	std::cerr<<"\nERROR - number is below zero\n";
}

std::ostream &operator<<(std::ostream &out, Student &s){
	return out<<"\nStudent: "<<s.getFirstName()<<" "<<s.getFamilyName()
		<<"\nstudent id: "<<s.getStudentId()
		<<"\nYear of study: "<<s.getYearOfStudy()<<"\n";
}


inline bool isValidName(std::string name){
   return(
   		std::all_of(name.begin(), name.end(),[] (char c){ 
   			return std::isalpha(c); 
   		})
   );
}

//GETTERS

std::string Student::getFirstName(){
	return this->firstName;
}
	
std::string Student::getFamilyName(){
	return this->familyName;
}
	
int Student::getStudentId(){
	return this->studentId;
}
	
int Student::getYearOfStudy(){
	return this->yearOfStudy;
}