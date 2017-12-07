#include "StudentDatabase.h"
#include <map>
#include <iostream>

// Insert a student into _students map
void StudentDatabase::addStudent(Student *s) {
	_students[s->getLastName()] = s; //creates another row in the databse with the last name of the Student as the key and the set of the student's info as the value
}

// Find the student with the matching last_name
// and call printInfo on that student, or
// print "<last_name> not found" if the student is not found
void StudentDatabase::printStudent(std::string last_name) {
  if (_students.find(last_name) == _students.end()){ //checks if the last_name does not exist in the database
	std::cout << last_name << " not found" << std::endl;
  }
  else
    _students[last_name]->printInfo(); //changes the student pointer to the actaul student so that printInfo works
  return;
}
