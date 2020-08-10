//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"

class University {
  public:
    University();
    University(string);
    University(string,Professor*,Administrative*);
    string getName();
    void setName(string);
    Professor* getProfessor();
    void setProfessor(Professor *professor);
    Administrative* getAdministrative();
    void setAdministrative(Administrative *administrative);
    void addProfessor(Professor *professor);
    vector<Professor>* getListProfessor();
    void addAdministrative(Administrative *administrative);
    vector<Administrative>* getListAdministrative();

  private:
    string name;
    Professor* professor;
    Administrative* administrative;
    vector<Professor>* professorList;
    vector<Administrative>* administrativeList;
};


#endif //LAB02_OOP_UNIVERSITY_H
