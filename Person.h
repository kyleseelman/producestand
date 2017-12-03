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

    void setLast(string last);
    void setFirst(string first);
    void setAddress(int house, string street, string city, string state,
      int zip);
    void setBDay(int month, int day, int year);

};

#endif
