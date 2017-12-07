/*
  Linda Fang and Kyle Seelman
  CPSC 1020 
  Programming Assingment 4
  kseelma and fang4
  Dr. Feaster
*/


#include "Fruit.h"

//initializes the static variables
double Fruit::totalFruitSales = 0;
int Fruit::fruitCount = 0;

//constructors
Fruit::Fruit():ProduceStand(){}
Fruit::Fruit(string name, double weight, double pricePerlb, double pricePerEach, int howMany){
    this->name = name;
    this->weight = weight;
    this->pricePerlb = pricePerlb;
    this->pricePerEach = pricePerEach;
    this->howMany = howMany;
}
//constructor to read in the file 
Fruit::Fruit(ifstream& in, ofstream& out){
  in >> name >> weight >> pricePerlb >> pricePerEach >> howMany;
  //sends the read in data to the fruit constructor
  Fruit temp(name,weight,pricePerlb,pricePerEach,howMany);
  temp.printReceipt(out);
  temp.calculateTax(out);
  temp.calculateSale(out);

  receiptNum++;
  fruitCount++;
}

//print function of fruit variables
void Fruit::printInfo(ofstream& out){
  out << "Number of fruit sales for the day: " << Fruit::getfruitCount()
      << endl << "Total fruit sales of $" << Fruit::getTotalFruitSales()
      << " for the day\n";
}

//calculate the tax for each sale
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

  out << setw(64)<< right << fixed << setprecision(2) << eachSalesTax 
      << endl;
}

//calculate the total sales of the fruit
void Fruit::calculateSale(ofstream& out){
  double total;
  total = eachSale + eachSalesTax;
  dailySales += eachSale;
  totalFruitSales+=eachSale;

  out << setw(75) << left << "     Total: " 
      << right << fixed << setprecision(2) << total 
      << endl <<endl;
}

//print the receipt for the fruit sale 
void Fruit::printReceipt(ofstream& out){
  if(weight == 0 && pricePerlb == 0){
    eachSale = pricePerEach * howMany;
  }
  else{
      eachSale = pricePerlb * weight;
  }

  out << setw(75) << left << name 
      << right << fixed << setprecision(2) <<eachSale << endl
      << left <<"    Sales Tax: ";
}
