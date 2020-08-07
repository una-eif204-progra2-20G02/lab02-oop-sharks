//
// Created by Maikol Guzman on 8/2/20.
//
#include <sstream>
using std::stringstream;
#include "Person.h"

Person::Person(){
  firstName = "";
  lastName = "";
  documentID = 0;

}

Person::Person(string firstName, string lastName, int documentID){

}

Person::~Person(){

}

string Person::getfirstName(){
  return firstName;
}

void Person::setFirstName(string){

}

string Person::getlastName(){
  return lastName;
}

void Person::setLastName(string){

}

int Person::getdocumentID(){
  return documentID;
}

void Person::setDocumentId(int){

}

double Person::salary(double) const{
  double netsalary;
  return netsalary;


}


string Person::toString() const{
  stringstream s;
  s<<firstName<<endl;
  s<<lastName<<endl;
  s<<documentID<<endl;
  return s.str();
}