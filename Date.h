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
    Date();
    Date(int m,int d,int y):month(m),day(d),year(y){}
    ~Date();
      
    void setMonth(int);
    void setDay(int);
    void setYear(int);

    int getMonth();
    int getDay();
    int getYear();
};
#endif
