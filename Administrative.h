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
  void setMonthlySalary(double);
  double getMonthlySalary();
  double salary();
  string toString();


private:
  double monthlySalary;
};
#endif //LAB02_OOP_ADMINISTRATIVE_H
