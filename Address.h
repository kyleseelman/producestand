#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
#include "Date.h"
using namespace std;

class Address
{
  private:
    int house;
    string street;
    string city;
    string state;
    int zip;

  public:
    //constructors
    Address();
    Address(int house, string street, string city, string state, int zip);

    //setters
    void setHouse(int house);
    void setStreet(string street);
    void setCity(string city);
    void setState(string state);
    void setZip(int zip);

    int getHouse(){return house;}
    string getStreet(){return street;}
    string getCity(){return city;}
    string getState(){return state;}
    int getZip(){return zip;}


};

#endif
