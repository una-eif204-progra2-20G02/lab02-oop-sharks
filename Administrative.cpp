//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative(){

}

Administrative::Administrative(double){

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