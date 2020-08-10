//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

University::University(){
  name = " ";
}

University::University(string name){
  this->name = name;
}

University::University(string name,Professor *professor,Administrative *administrative){
  this->name = name;
  this->professor = professor;
  this->administrative = administrative;
}

string University::getName(){
  return name;
}

void University::setName(string name){
  this->name = name;
}

Professor* University::getProfessor(){
  return professor;
}

void University::setProfessor(Professor *professor){
  this->professor = professor;
}

Administrative* University::getAdministrative(){
  return administrative;
}

void University::setAdministrative(Administrative *administrative){
  this->administrative = administrative;
}

void University::addProfessor(Professor *professor){
  for(int i = 0 ; i < professorList->size();++){
    professorList[i] = professor;
  }
}

vector<Professor>* University::getListProfessor(){
  return professorList;
}

void University::addAdministrative(Administrative *administrative){
    for(int i = 0 ; i < administrativeList->size();++){
    administrativeList[i] = administrative;
  }
}

vector<Administrative>* University::getListAdministrative(){
  return administrativeList;
}