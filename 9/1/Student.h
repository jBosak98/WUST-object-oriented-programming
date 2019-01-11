#ifndef STUDENT_HEADER
#define STUDENT_HEADER

#include <iostream>
#include <algorithm>


inline bool isValidName(std::string name);

class NameError{
public:
	virtual void errorMessage();
};

class BelowZeroError{
public:
	virtual void errorMessage();
};

class Student: public NameError, public BelowZeroError{
public:
	Student(std::string firstName, 
		std::string familyName,
		int studentId, 
		int yearOfStudy);
	
	std::string getFirstName();
	
	std::string getFamilyName();
	
	int getStudentId();
	
	int getYearOfStudy();

	friend std::ostream &operator<<(std::ostream &out, Student &s);

private:
	std::string firstName;

	std::string familyName;
	
	int studentId;
	
	int yearOfStudy;
};



#endif