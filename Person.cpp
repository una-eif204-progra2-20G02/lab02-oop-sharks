//
// Created by Maikol Guzman on 8/2/20.
//
#include <sstream>
using std::stringstream;
#include "Person.h"

Person::Person(){
  firstName = "";
  lastName = "";
  documentId = 0;
}

Person::Person(string firstName, string lastName, int documentID){
  this->firstName = firstName;
  this->lastName = lastName;
  documentId = documentID;
}

Person::~Person(){

}

string Person::getfirstName(){
  return firstName;
}

void Person::setFirstName(string firstName){
  this->firstName = firstName;
}

string Person::getlastName(){
  return lastName;
}

void Person::setLastName(string lastName){
  this->lastName = lastName;
}

int Person::getdocumentID(){
  return documentId;
}

void Person::setDocumentId(int documentID){
  documentId = documentID;
}

double Person::salary() const{
  double netsalary;
  return netsalary;


}


string Person::toString() const{
  stringstream s;
  s<<firstName<<endl;
  s<<lastName<<endl;
  s<<documentId<<endl;
  return s.str();
}