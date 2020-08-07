//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

Professor::Professor(){
  firstName = "";
  lastName = "";
  documentId = 0;
  monthlySalary = 0;
  commissionRate = 0;
}

Professor::Professor(string firstName, string lastName, int documentId, double monthlySalary, double commissionRate) :Person(firstName, lastName,documentId){
  this.monthlySalary = monthlySalary;
  this.commissionRate = commissionRate;
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