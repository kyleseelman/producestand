#include "Fruit.h"

double Fruit::totalFruitSales = 0;
int Fruit::fruitCount = 0;

Fruit::Fruit():ProduceStand(){
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
    totalFruitSales +=

  }
Fruit::Fruit(ifstream& in, ofstream& out){
  getline(in, name);
  in >> weight >> pricePerlb >> pricePerEach >> howMany;
  Fruit(name, pricePerlb, pricePerEach, howMany).printReceipt(out);
  Fruit(name, pricePerlb, pricePerEach, howMany).calculateTax(out);
  Fruit(name, pricePerlb, pricePerEach, howMany).calculateSales(out);

  totalFruitSales += totalFruitSales;
  fruitCount++;
}

void Fruit::printInfo(ofstream& out){
  out << "Number of fruit sales for the day: " << Fruit.getfruitCount()
      << endl << "Total fruit sales of " << Fruit.getTotalFruitSales()
      << " for the day\n";
}
