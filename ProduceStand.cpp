#include "ProduceStand.h"

ProduceStand::ProduceStand():name(" "), weight(0),pricePerlb(0), 
              pricePerEach(0),howMany(0),eachSale(0), eachSalesTax(0),
              Person(" "," "," ", Address(0," "," "," ",0),
              Date(0,0,0)){
  //dailySales += dailySales;
  //dailySalesTax += dailySalesTax;
  receiptNum++;
}

ProduceStand::ProduceStand(string n,double w,double ppw,double ppe,int num):
              name(n),weight(w),pricePerlb(ppw),pricePerEach(ppe),howMany(num){
  //dailySales += dailySales;
  //dailySalesTax += dailySalesTax;
  receiptNum++;
}

ProduceStand::~ProduceStand(){}

void ProduceStand::setStandName(string name){
  standName=name;
}

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

void ProduceStand::printHeader(ofstream& out){
  for(int i=0;i<80;i++){
    out << "*";
  }
  out << endl
      << standName << endl << "Clemson, SC\n"
      << "Receipt #" << ProduceStand::receiptNum << endl;
  for(int i=0;i<80;i++){
    out << "*";
  }
  out << endl << endl;
}

void ProduceStand::printStats(ofstream& out){
  out << "Total sales for the day: $" << ProduceStand::getDailySales()
      << "\nTotal sales tax collected for the day: $" 
      << ProduceStand::getDailySalesTax() << endl;
}
