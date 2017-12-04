#include "Vegetable.h"
#include "ProduceStand.h"

Vegetable::Vegetable():ProduceStand(){
  totalVegtSales += totalVegtSales;
  vegtCount++;
}

Vegetable::Vegetable(ifstream& in, ofstream& out){
  getline(in,name);
  in>>weight >> pricePerlb >> pricePerEach >> howMany;
  Vegetable(name,pricePerlb,pricePerEach,howMany).printReceipt(out);
  Vegetable(name,pricePerlb,pricePerEach,howMany).calculateTax(out);
  Vegetable(name,pricePerlb,pricePerEach,howMany).calculateSales(out);
 
  totalVegtSales += totalVegtSales;
  vegtCount++;
}

Vegetable::Vegetable(string n,double w,double ppw,double p, int num):
           ProduceStand(n,w,ppw,p,num){}

virtual Vegetable::~Vegetable(){
  vegtCount--;
}

double Vegetable::getTotalVegtSales(){
  return totalVegtSales;
}

int Vegetable::getVegtCount(){
  return vegtCount;
}

void Vegetable::calculateTax(ofstream& out){
  if(weight==0 && pricePerlb==0){
    eachSale = priceperEach*howMany;
    eachSalesTax=eachSale*.08;
  }
  else{
    eachSale=pricePerlb*weight;
    eachSalesTax=eachSale*.08;
  }
  dailySalesTax += eachSalesTax;
  //not very sure, look up showpoint
  out << right << showpoint << setprecision(2) << eachSalesTax << endl;
}

void Vegetable::calculateSales(ofstream& out){
  double total;
  total = eachSale + eachSalesTax;
  dailySales+=total;
  //showpoint
  out << "    Total: " << right << showpoint << setprecision(2) << total << endl;
}

void Vegetable::printReceipt(ofstream& out){
  out << setw(80) << name << right << eachSale << endl
      << "    Sales Tax: ";
}

void Vegetable::printInfo(ofstream& out){
  out << "Number of vegetable sales for the day: " << Vegetable::getVegtCount()
      << endl << "Total vegetable sales of " << Vegetable::getTotalVegtSales()
      << " for the day\n";
}
