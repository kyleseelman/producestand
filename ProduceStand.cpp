/*
 Linda Fang and Kyle Seelman
 CPSC 1020
 Programming Assingment 4
 kseelma and fang4
 Dr. Feaster
*/


#include "ProduceStand.h"

//initializaiton of the static variables 
int ProduceStand::receiptNum=1;
double ProduceStand::dailySales=0;
double ProduceStand::dailySalesTax=0;

//constructors
ProduceStand::ProduceStand():name(" "), weight(0),pricePerlb(0), 
              pricePerEach(0),howMany(0){}

ProduceStand::ProduceStand(string n,double w,double ppw,double ppe,int num):
              name(n),weight(w),pricePerlb(ppw),pricePerEach(ppe),howMany(num){
  //receiptNum++;
}
//destructor
ProduceStand::~ProduceStand(){}

//implementation of the setters
void ProduceStand::setStandName(string name){
  standName=name;
}

//implementation of the getters
string ProduceStand::getStandName(){
  return standName;
}
int ProduceStand::getReceiptNum(){
  return receiptNum;
}
double ProduceStand::getDailySales(){
  return dailySales;
}
double ProduceStand::getDailySalesTax(){
  return dailySalesTax;
}

//print function for the header of the receipts
void ProduceStand::printHeader(ofstream& out){
  standName="Hey Y'all";

  for(int i=0;i<=80;i++){
    out << "*";
  }
  out << endl
      << standName << endl << "Clemson, SC\n"
      << "Receipt #" << receiptNum << endl;
  for(int i=0;i<=80;i++){
    out << "*";
  }
  out << endl << endl;
}

//print function for the producestand variables
void ProduceStand::printStats(ofstream& out){
  out << "Total sales for the day: $" << ProduceStand::getDailySales()
      << "\nTotal sales tax collected for the day: $" 
      << ProduceStand::getDailySalesTax() << endl;
}
