#include "Fruit.h"

double Fruit::totalFruitSales = 0;
int Fruit::fruitCount = 0;

Fruit::Fruit(){
  totalFruitSales += totalFruitSales;
  fruitCount++;
}
Fruit::Fruit(string name, double weight, double pricePerlb, double pricePerEach
  , int howMany){
    this->name = name;
    this->weight = weight;
    this->pricePerlb = pricePerlb;
    this->pricePerEach = pricePerEach;
    this->howMany = howMany;

    fruitCount++;
    totalFruitSales += totalFruitSales;

  }
Fruit::Fruit(ifstream& in, ofstream& out){

  getline(in, name);
  in >> weight >> pricePerlb >> pricePerEach >> howMany;

  Fruit temp(name, weight, pricePerlb, pricePerEach, howMany);
  temp.printReceipt(out);
  temp.calculateTax(out);
  temp.calculateSale(out);

  totalFruitSales += totalFruitSales;
  fruitCount++;
}

void Fruit::calculateTax(ofstream& out){
  if(weight == 0 && pricePerlb == 0){
    eachSale = pricePerEach * howMany;
    eachSalesTax = eachSale * 0.08;
  }
  else{
      eachSale = pricePerlb * weight;
      eachSalesTax = eachSale * 0.08;
  }

  dailySalesTax += eachSalesTax;

  out << right << showpoint << setprecision(2) << eachSalesTax << endl;
}

void Fruit::calculateSale(ofstream& out){
  double total;
  total = eachSale + eachSalesTax;
  dailySales += total;

  out << "     Total: " << right << showpoint << setprecision(2) << total
      << endl;
}

void Fruit::printReceipt(ofstream& out){
  out << setw(80) << name << right << eachSale << endl
      << "    Sales Tax: ";
}

void Fruit::printInfo(ofstream& out){
  out << "Number of fruit sales for the day: " << Fruit::getfruitCount()
      << endl << "Total fruit sales of " << Fruit::getTotalFruitSales()
      << " for the day\n";
}
