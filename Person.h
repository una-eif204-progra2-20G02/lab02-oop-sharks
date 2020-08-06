//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <string>
#include <ostream>
#include <sstream>
using namespace std;


/**
 * Abstract Class of Person
 */
class Person {
public:
  Person();
  Person(string,string,int);
  virtual ~Person();
  string getfirstName();
  void setFirstName(string);
  string getlastName();
  void setLastName(string);
  int getdocumentID();
  void setDocumentId(int);
  virtual string toString() const;
  virtual double salary(double) const;

private:
  
  string firstName="";
  string lastName="";
  int documentlID;

};


#endif //LAB02_OOP_PERSON_H
