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
    ~Fruit(){fruitCount--;}
    Fruit(ifstream&, ofstream& out);
    Fruit(string, double, double, double, int);
    static double getTotalFruitSales(){return totalFruitSales;}
    static int getfruitCount(){return fruitCount;}

    virtual void calculateTax(ofstream& out);
    virtual void calculateSale(ofstream& out);
    virtual void printReceipt(ofstream& out);

    void printInfo(ofstream& out);

};

#endif
