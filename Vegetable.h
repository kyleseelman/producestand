/*
 Linda Fang and Kyle Seelman
 CPSC 1020
 Programming Assingment 4
 kseelma and fang4
 Dr. Feaster
*/


#ifndef VEGETABLE_H
#define VEGETABLE_H

#include <string>
#include "ProduceStand.h"
#include <fstream>
#include <iostream>
using namespace std;

class Vegetable : public ProduceStand
{
  private:

    static double totalVegtSales;
    static int vegtCount;

  public:
    //constructor
    Vegetable():ProduceStand(){};
    Vegetable(ifstream& in, ofstream& out);
    Vegetable(string, double, double, double, int);
    //destructor
    virtual ~Vegetable() {}

    //functions to calculate taxe and sale total
    virtual void calculateTax(ofstream& out);
    virtual void calculateSale(ofstream& out);
    virtual void printReceipt(ofstream& out);
    void printInfo(ofstream& out);

    //getters for static variables
    static double getTotalVegtSales();
    static int getVegtCount();
};

#endif
