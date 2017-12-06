#include "Vegetable.h"

int Vegetable::vegtCount=0;
double Vegetable::totalVegtSales=0;

Vegetable::Vegetable(ifstream& in, ofstream& out){
  in>>name>>weight >> pricePerlb >> pricePerEach >> howMany;

  Vegetable temp(name,weight,pricePerlb,pricePerEach,howMany);
  temp.printReceipt(out);
  temp.calculateTax(out);
  temp.calculateSale(out);

  vegtCount++;
}

Vegetable::Vegetable(string n,double w,double ppw,double p, int num):
           ProduceStand(n,w,ppw,p,num){}

double Vegetable::getTotalVegtSales(){
  return totalVegtSales;
}

int Vegetable::getVegtCount(){
  return vegtCount;
}

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
  out << setw(69) <<right << fixed << setprecision(2) << eachSalesTax << endl;
}

void Vegetable::calculateSale(ofstream& out){
  double total;
  total = eachSale + eachSalesTax;
  dailySales+=total;
  totalVegtSales+=total;
  
  out <<setw(80) <<left<<"    Total: " 
      << right << fixed << setprecision(2) << total << endl;
}

void Vegetable::printReceipt(ofstream& out){
  out << setw(80) << left << name << right << eachSale << endl
      << left <<"    Sales Tax: ";
}

void Vegetable::printInfo(ofstream& out){
  out << "Number of vegetable sales for the day: " << Vegetable::getVegtCount()
      << endl << "Total vegetable sales of " << Vegetable::getTotalVegtSales()
      << " for the day\n";
}
