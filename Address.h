#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
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

};

#endif
