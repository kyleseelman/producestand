#include "Date.h"
#include "ProduceStand.h"

Date::Date():month(0),day(0),year(0){}
Date::~Date(){}
      
void Date::setMonth(int m){
  month = m;
}
void Date::setDay(int d){
  day = d;
}
void Date::setYear(int y){
  year = y;
}

int Date::getMonth(){
  return month;
}
int Date::getDay(){
  return day;
}
int Date::getYear(){
  return year;
}

void Date::printDate(ostream& out){
  out << month << "/" << day <<"/" << year << endl<<endl;
}
