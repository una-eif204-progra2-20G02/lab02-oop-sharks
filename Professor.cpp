//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

Professor::Professor(){

}

Professor::Professor(double,double){

}

Professor::~Professor(){

}
double Professor::getmonthlySalary(){
  return monthlySalary;
}

double Professor::getcommissionRate(){
  return commissionRate;
}

void Professor::setmonthlySalary(double){

}

void Professor::setcommissionRate(double){

}

double Professor::salary(){
  double netSalary;
  netSalary=monthlySalary+commissionRate;
  return netSalary;
}

string Professor::toString() {
  stringstream s;
  s<<monthlySalary<<endl;
  s<<commissionRate<<endl;
  return s.str();
}