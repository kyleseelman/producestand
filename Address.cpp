/*
  Linda Fang and Kyle Seelman
  CPSC 1020 
  Programming Assingment 4
  kseelma and fang4
  Dr. Feaster
*/


#include "Address.h"

//constructors
Address::Address():house(0),street(" "),city(" "), state(" "),zip(0){}
Address::Address(int house, string street, string city, string state, int zip){
  this->house = house;
  this->street = street;
  this->city = city;
  this->state = state;
  this->zip = zip;
}

//implementation for the setters
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

//print function for the address variables
void Address::printAddress(ostream& out){
  out << house << " " << street << endl
      << city << ", " << state << " " << zip << endl;
}
