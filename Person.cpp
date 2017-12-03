#include "Person.h"

Person::Person(): last(" "), first(" "){}
Person::Person(string last, string first, string email){
    this->last = last;
    this->first = first;
    this->email = email;
}

void Person::setLast(string last){
  this->last = last;
}
void Person::setFirst(string first){
  this->first = first;
}
void Person::setAddress(int house, string street, string city, string state,
  int zip){
    this->address.setHouse(house);
    this->address.setStreet(street)
    this->address.setCity(city);
    this->address.setState(state);
    this->adrress.setZip(zip);
}
void Person::setBDay(int month, int day, int year){

}
