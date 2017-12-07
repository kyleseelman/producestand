/*
  Linda Fang and Kyle Seelman
  CPSC 1020 
  Programming Assingment 4
  kseelma and fang4
  Dr. Feaster
*/

#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;


class Date
{
  private:
    int month;
    int day;
    int year;

  public:
    //constructors
    Date();
    Date(int m,int d,int y):month(m),day(d),year(y){}
    //destructors
    ~Date();
    //setters
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    //getters
    int getMonth();
    int getDay();
    int getYear();

    void printDate(ostream&);
};
#endif
