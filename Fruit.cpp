#include "Fruit.h"

double Fruit::totalFruitSales = 0;
int Fruit::fruitCount = 0;

Fruit::Fruit(){}

Fruit::Fruit(double totalFruitSales, int fruitCount, string name, double weight,
  double pricePerlb, double pricePerEach, int howMany){
    this->totalFruitSales = totalFruitSales;
    this->fruitCount = fruitCount;
    this->name = name;
    this->weight = weight;
    this->pricePerlb = pricePerlb;
    this->pricePerEach = pricePerEach;
    this->howMany = howMany;
  }
