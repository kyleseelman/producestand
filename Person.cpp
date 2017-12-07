/*
 Linda Fang and Kyle Seelman
 CPSC 1020
 Programming Assingment 4
 kseelma and fang4
 Dr. Feaster
*/


#include "Person.h"

//constructors
Person::Person(): last(" "), first(" "),email(" "),address(0," "," "," ",0),
bday(0,0,0){}
Person::Person(string last, string first, string email):bday(0,0,0){
    this->last = last;
    this->first = first;
    this->email = email;
    address.setHouse(0);
    address.setStreet(" ");
    address.setCity(" ");
    address.setState(" ");
    address.setZip(0);
}

//implementation of the setters
void Person::setLast(string last){
  this->last = last;
}
void Person::setFirst(string first){
  this->first = first;
}

//implementation of the getters
string Person::getLast(){
  return last;
}
string Person::getFirst(){
  return first;
}
string Person::getEmail(){
  return email;
}

//print function to print the person information
void Person::printEmail(vector<Person>& p,ostream& out){
  for(uint i=0;i<p.size();i++){
    Person temp;
    temp=p[i];
    out << temp.getLast()<<", " << temp.getFirst() << endl;
      temp.address.printAddress(out);
    out << temp.getEmail() << endl;
      temp.bday.printDate(out);
  }
}
