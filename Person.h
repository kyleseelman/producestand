#ifndef PERSON_H
#define PERSON_H

#include "Address.h"
#include "Date.h"
#include <string>
#include<vector>
#include<fstream>
#include<iostream>

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
    string st,int zip,int m,int d,int y):last(l),first(f),email(em),
    address(sNum,sName,city,st,zip),bday(m,d,y){};
    Person(ifstream&, ofstream&);

    void setLast(string last);
    void setFirst(string first);
    string getLast();
    string getFirst();
    string getEmail();
    void printEmail(vector<Person>& p,ostream& out);

};

#endif
