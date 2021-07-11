//
// Created by Maikol Guzman on 8/2/20.
//

#include <iostream>
#include "Professor.h"
#include "Administrative.h"
#include "University.h"

int main() {

  University university;

  Professor* professor1 = new Professor("Mike","Guzman",1234567890,1500000.00, 0.05);
  Professor* professor2 = new Professor("Pedro","Sanchez",1286608618,1000000.00, 0.05);

  Administrative* administrative1 = new Administrative("Jesus","Garcia",706780156,1406400.00);
  Administrative* administrative2 = new Administrative("Cristian","Artavia",502580654,1975219.00);

  university.addProfessor(professor1);
  university.addProfessor(professor2);

  university.addAdministrative(administrative1);
  university.addAdministrative(administrative2);

  cout<<university.getListProfessor();
  cout<<endl;
  cout<<university.getListAdministrative();

}  