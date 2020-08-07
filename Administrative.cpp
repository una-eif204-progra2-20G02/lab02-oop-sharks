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

Administrative::Administrative(double){

}

Administrative::Administrative(string firstName, string lastName, int documentId, double monthlySalary) :Person(firstName, lastName,documentId){
  this.monthlySalary = monthlySalary;
}

void Administrative::setmonthlySalary(double){

}

double Administrative::getmonthlySalary(){
  return monthlySalary;
}

double Administrative::salary(){
  return salary;
}

string Administrative::toString() {
  stringstream t;
  t<<monthlySalary<<endl;
  return t.str();
} 