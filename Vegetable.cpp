/*
  Linda Fang and Kyle Seelman
  CPSC 1020 
  Programming Assingment 4
  kseelma and fang4
  Dr. Feaster
*/

#include "Vegetable.h"

//initialization of the static variables
int Vegetable::vegtCount=0;
double Vegetable::totalVegtSales=0;

//constructors
Vegetable::Vegetable(ifstream& in, ofstream& out){
  in>>name>>weight >> pricePerlb >> pricePerEach >> howMany;

  Vegetable temp(name,weight,pricePerlb,pricePerEach,howMany);
  temp.printReceipt(out);
  temp.calculateTax(out);
  temp.calculateSale(out);

  receiptNum++; 
  vegtCount++;
}
Vegetable::Vegetable(string n,double w,double ppw,double p, int num):
           ProduceStand(n,w,ppw,p,num){}

//implentation of the getters
double Vegetable::getTotalVegtSales(){
  return totalVegtSales;
}
int Vegetable::getVegtCount(){
  return vegtCount;
}

//calculate tax for each vegetable sale
void Vegetable::calculateTax(ofstream& out){
  if(weight==0 && pricePerlb==0){
    eachSale = pricePerEach*howMany;
    eachSalesTax=eachSale*.08;
  }
  else{
    eachSale=pricePerlb*weight;
    eachSalesTax=eachSale*.08;
  }
  dailySalesTax += eachSalesTax;
  out << setw(64) <<right << fixed << setprecision(2) << eachSalesTax 
      << endl;
}

//calculate total vegetable sales 
void Vegetable::calculateSale(ofstream& out){
  double total;
  total = eachSale + eachSalesTax;
  dailySales+=eachSale;
  totalVegtSales+=eachSale;
  out <<setw(75) << left<<"    Total: " 
      << right << fixed << setprecision(2) << total << endl << endl;
}

//print receipt for each vegetable sale
void Vegetable::printReceipt(ofstream& out){
  if(weight==0 && pricePerlb==0){
    eachSale = pricePerEach*howMany;
  }
  else{
    eachSale=pricePerlb*weight;
  }
  out << setw(75) << left << name 
      << right << fixed << setprecision(2) << eachSale << endl
      << left <<"    Sales Tax: ";
}

//print function for the vegetable variables
void Vegetable::printInfo(ofstream& out){
  out << "Number of vegetable sales for the day: " << Vegetable::getVegtCount()
      << endl << "Total vegetable sales of $" << Vegetable::getTotalVegtSales()
      << " for the day\n";
}
