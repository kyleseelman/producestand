/*
 Linda Fang and Kyle Seelman
 CPSC 1020
 Programming Assingment 4
 kseelma and fang4
 Dr. Feaster
*/


#include "ProduceStand.h"
#include "Vegetable.h"
#include "Fruit.h"
#include "Person.h"
#include <vector>

//function to read in the data from input file
void readData(ifstream &input, ofstream &receiptOut, ofstream &emailList){
  string type=" ";
  char choice;
  int count=0;
  ProduceStand temp;
  vector <Person> p;

  //read in file while its not at the end
  input >> type;
  while(!input.eof()){
    //determines what type of food
    temp.printHeader(receiptOut);
    if(type=="Vegetable"){
      Vegetable v(input,receiptOut);
    }
    else if(type=="Fruit"){
      Fruit f(input,receiptOut);
    }
    //determine if the customer wants to join mailing list
    input >> choice;
    if(choice=='y'){
      count++;
      int sNum,zip,m,d,y;
      string sName,city,st,l,f,em;
      input >> l >> f >> em >> sNum >> sName >> city >> st >> zip
      >> m >> d >> y;
      p.push_back(Person(l,f,em,sNum,sName,city,st,zip,m,d,y));
    }
    else if(choice=='n'){
      choice='n';
    }
    input >> type;
  }
  Person ptemp;
  //call functions to print out information
  ptemp.printEmail(p,emailList); 
  temp.printStats(receiptOut);
  Fruit ft;
  ft.printInfo(receiptOut);
  Vegetable vt;
  vt.printInfo(receiptOut);
  receiptOut << "Total customers added to the mailing list: " << count << endl;
}


int main(int argc, char* argv[]){
  //opens input and output files
  ifstream input;
  input.open(argv[1]);
  ofstream receiptOut;
  receiptOut.open(argv[2]);
  ofstream emailList;
  emailList.open(argv[3]);
  //sends file to function to read in
  readData(input, receiptOut, emailList);

  input.close();
  receiptOut.close();
  emailList.close();

  return 0;
}
