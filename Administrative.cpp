//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative(){
  firstName = "";
  lastName = "";
  documentId = 0;
  monthlySalary = 0;
}

Administrative::Administrative(double monthlySalary){
this->monthlySalary = monthlySalary;
}

Administrative::Administrative(string firstName, string lastName, int documentId, double monthlySalary) :Person(firstName, lastName,documentId){
  this->monthlySalary = monthlySalary;
}

void Administrative::setMonthlySalary(double monthlySalary){
  this->monthlySalary = monthlySalary;
}

double Administrative::getMonthlySalary(){
  return monthlySalary;
}

double Administrative::salary(){
  return monthlySalary;
}

string Administrative::toString() {
  stringstream t;
  Person::toString();
  t<<salary()<<endl;
  return t.str();
} 