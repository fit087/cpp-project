/*
	Definition on Person class: Person.h
*/
#ifndef PERSON_H
#define PERSON_H

#include "string"
using std::string;

class Person
{
  public:
    Person();
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();

  private:
    string name;
    int age;
};
#endif
