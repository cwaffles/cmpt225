//
// Created by eric on 21/07/16.
//

#include <iostream>
#include "university.h"

//private:
//std::string name;
//std::string address;
//std::string email;
//std::string phone;
//btree<student> studentList;
//size_t studentCount; //for listInfo()

//default constructor
university::university()
{
	//nothing to do here
}

//preconditions: inputName is not empty
//postconditions: throws classException if inputName is empty
//description: constructor with only university name
university::university(std::string inputName) throw(classException):
		name(inputName)
{
	if(inputName.empty()) //can't have empty inputName
	{
		throw(classException("Error: can't have empty inputName"));
	}
}

//preconditions: inputName is not empty
//postconditions: throws classException if inputName is empty
//description: constructor with all fields
university::university(std::string inputName,
					   std::string inputAddress,
					   std::string inputEmail,
					   std::string inputPhone) throw(classException):
		name(inputName),
		address(inputAddress),
		email(inputEmail),
		phone(inputPhone)
{
	if(inputName.empty()) //can't have empty inputName
	{
		throw(classException("Error: can't have empty inputName"));
	}
}

//default destructor
university::~university()
{
	studentCount = 0;
	//bstree destructor should automatically be called
}

//preconditions: inputName is not empty
//postconditions: throws classException if inputName is empty
//description: sets all fields of university object
void university::setAll(std::string inputName, std::string inputAddress, std::string inputEmail, std::string inputPhone) throw(classException)
{
	name = inputName;
	address = inputAddress;
	email = inputEmail;
	phone = inputPhone;
	
	if(name.empty()) //can't have empty inputName
	{
		throw(classException("Error: can't have empty inputName"));
	}
}

//preconditions: inputStudent has a valid lastName and studentID
//postconditions: returns 0 upon successful insertion, 1 if there is an error
//description: inserts a student into the university in O(log(n)) time
uint8_t university::addStudent(const student& inputStudent)
{
	if(inputStudent.empty()) //check for empty input
	{
		return 1; //error, can't input empty students
	}
	return studentList.insert(inputStudent);
}

//preconditions: none
//postconditions: none
//description: lists all of the students attending the university sorted by ID in O(n) time
//in-order traversal of id set of pointers
void university::listStudentsByID(void) const
{
	//inorder traverse of btree based on ID pointers
}

//preconditions: none
//postconditions: none
//description: lists all of the students attending the university sorted by last name in O(n) time
//in-order traversal of lastname set of pointers
void university::listStudentsByLName(void) const
{
	//inorder traverse of btree based on Lname pointers
}

//preconditions: none
//postconditions: none
//description: displays all university info (not including student info)
void university::print(void) const
{
	std::cout << "University Details\nName: " << name << "\nAddress: " << "\nEmail: " << email << "\nPhone: " << phone << "\nStudent Count: " << studentCount << std::endl;
}