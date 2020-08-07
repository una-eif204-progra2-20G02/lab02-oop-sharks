//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor: public Person {
  public:
  Professor();
  Professor(double, double);
  virtual ~Professor();
  double getmonthlySalary();
  double getcommissionRate();
  void setmonthlySalary(double);
  void setcommissionRate(double);
  double salary();
  string toString();
 



  private:
  double monthlySalary;
  double commissionRate;

};

#endif //LAB02_OOP_PROFESSOR_H
