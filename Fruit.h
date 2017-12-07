/*
  Linda Fang and Kyle Seelman
  CPSC 1020 
  Programming Assingment 4
  kseelma and fang4
  Dr. Feaster
*/


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
    //static variables
    static double totalFruitSales;
    static int fruitCount;

  public:
    //constructors
    Fruit();
    Fruit(ifstream&, ofstream& out);
    Fruit(string, double, double, double, int);
    //destructor
    ~Fruit(){}
    
    //implementation of getters
    static double getTotalFruitSales(){return totalFruitSales;}
    static int getfruitCount(){return fruitCount;}

    //functions to calculate tax, sale, and print receipt
    virtual void calculateTax(ofstream& out);
    virtual void calculateSale(ofstream& out);
    virtual void printReceipt(ofstream& out);

    void printInfo(ofstream& out);
};

#endif
