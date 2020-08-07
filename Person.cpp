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
  this.firstName = firstName;
  this.lastName = lastName;
  this.documentID = documentID;
}

Person::~Person(){

}

string Person::getfirstName(){
  return firstName;
}

void Person::setFirstName(string firstName){
  this.firstName = firstName;
}

string Person::getlastName(){
  return lastName;
}

void Person::setLastName(string lastName){
  this.lastName = lastName;
}

int Person::getdocumentID(){
  return documentID;
}

void Person::setDocumentId(int){
  this.documentID = documentID;
}

double Person::salary(double ) const{
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