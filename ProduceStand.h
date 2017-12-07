/*
 Linda Fang and Kyle Seelman
 CPSC 1020
 Programming Assingment 4
 kseelma and fang4
 Dr. Feaster
*/


#ifndef STAND_H
#define STAND_H

#include <string>
#include <ctime>
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include "Person.h"

using namespace std;

class ProduceStand
{
  protected:

    string name;
    double weight;
    double pricePerlb;
    double pricePerEach;
    int howMany;
    //the amount of each sale used in calculateSales and then in calculateTax
    double eachSale;
    //the amount of tax for each sale used in calculateSales and calculateTax
    double eachSalesTax;

    //keeps track of the dailySales of both Fruit and Vegtable.

    static double dailySales;
    static double dailySalesTax;
    Person customer;
    static int receiptNum;

  private:
    string standName;
    /*because PS's constructor gets called each time an instance of fruit or
     *vegetable gets cretated then increment receiptNum also.*/
    //static int receiptNum;


  public:
    //constructors
    ProduceStand();
    ProduceStand(string, double, double, double, int);
    //destructor
    virtual ~ProduceStand();

    //setters
    void setStandName(string);
    string getStandName();
    //getters
    static double getDailySales();
    static double getDailySalesTax();
    static int getReceiptNum();
  
    //print functions for the header and producestand variables
    void printHeader(ofstream&);
    void printStats(ofstream&);
};
#endif
