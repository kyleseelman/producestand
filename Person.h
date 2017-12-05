#ifndef PERSON_H
#define PERSON_H

#include "Address.h"
#include "Date.h"
#include <string>

class Person
{
  private:
    string last;
    string first;
    string email;
    Address address;
    Date bday;

  public:
    Person();
    Person(string last, string first, string email);
    Person(string l,string f,string em,int sNum,string sName,string city,
    string st,int zip):last(l),first(f),email(em),
    address(sNum,sName,city,st,zip){};
  
    void setLast(string last);
    void setFirst(string first);
    void setAddress(int house, string street, string city, string state,
      int zip);
    

};

#endif
