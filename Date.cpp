#include "Date.h"
#include "ProduceStand.h"

//Constructors
Date::Date():month(0),day(0),year(0){}
Date::~Date(){}

//implementation of the setters
void Date::setMonth(int m){
  month = m;
}
void Date::setDay(int d){
  day = d;
}
void Date::setYear(int y){
  year = y;
}

//implementation of the getters
int Date::getMonth(){
  return month;
}
int Date::getDay(){
  return day;
}
int Date::getYear(){
  return year;
}

//print function for the date variables
void Date::printDate(ostream& out){
  out << month << "/" << day <<"/" << year << endl<<endl;
}
