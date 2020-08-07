//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"

class Administrative: public Person {

public:
  Administrative();
  Administrative(double);
  Administrative(string,string,int,double);
  void setmonthlySalary(double);
  double getmonthlySalary();
  double salary();
  string toString();


private:
  string firstName="";
  string lastName="";
  int documentID;
  double monthSalary;

#endif //LAB02_OOP_ADMINISTRATIVE_H
