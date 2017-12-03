#ifndef FRUIT_H
#define FRUIT_H

#include <string>
#include "ProduceStand.h"
#include <fstream>
#include <iostream>
using namespace std;
class Fruit : public ProduceStand
{
  private:

    static double totalFruitSales;
    static int fruitCount;

  public:

    Fruit();
    Fruit(double totalFruitSales, int fruitCount, string name, double weight,
      double pricePerlb, double pricePerEach, int howMany);
    static double getTotalFruitSales(){return totalFruitSales;}
    static int getfruitCount(){return fruitCount;}

};

#endif
