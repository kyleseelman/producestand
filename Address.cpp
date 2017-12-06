#include "Address.h"

Address::Address():house(0),street(" "),city(" "), state(" "),zip(0){}

Address::Address(int house, string street, string city, string state, int zip){
  this->house = house;
  this->street = street;
  this->city = city;
  this->state = state;
  this->zip = zip;
}

void Address::setHouse(int house){
  this->house = house;
}

void Address::setStreet(string street){
  this->street = street;
}

void Address::setCity (string city){
  this->city = city;
}

void Address::setState(string state){
  this->state = state;
}

void Address::setZip(int zip){
  this->zip = zip;
}
