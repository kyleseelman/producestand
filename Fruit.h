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

    Fruit(){};
    ~Fruit(){fruitCount--;}
    Fruit(ifstream&, ofstream& out);
    Fruit(string, double, double, double, int);
    static double getTotalFruitSales(){return totalFruitSales;}
    static int getfruitCount(){return fruitCount;}

    void printInfo(ofstream& out);

};

#endif
