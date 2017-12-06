#include "Person.h"

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

void Person::setLast(string last){
  this->last = last;
}
void Person::setFirst(string first){
  this->first = first;
}
string Person::getLast(){
  return last;
}
string Person::getFirst(){
  return first;
}
string Person::getEmail(){
  return email;
}

void Person::printEmail(ofstream& out){
  //This function does not work for some reason
  //Person ptemp;
  //out << ptemp.getLast() << ", " << ptemp.getFirst() << endl;
  /*out << ptemp.getLast() << ", " << ptemp.getFirst() << endl
      << ptemp.address.getHouse() << " " << ptemp.address.getStreet() << endl
      << ptemp.address.getCity() << ", " << ptemp.address.getState() << " " <<ptemp.address.getZip() << endl
      << ptemp.getEmail() << endl
      << ptemp.bday.getMonth() << "/" << ptemp.bday.getDay() << "/" << ptemp.bday.getYear()<<endl;*/
}
