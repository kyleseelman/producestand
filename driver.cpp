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

//function to read in the input file and call appropiate function
void readData(ifstream &input, ofstream &receiptOut, ofstream &emailList){
  string type=" ";
  char choice;
  int count=0;
  ProduceStand temp;
  //
  input >> type;
  while(!input.eof()){
    temp.printHeader(receiptOut);
    if(type=="Vegetable"){
      Vegetable v(input,receiptOut);
    }
    else if(type=="Fruit"){
      Fruit f(input,receiptOut);
    }

    input >> choice;
    if(choice=='y'){
      count++;
      int sNum,zip,m,d,y;
      string sName,city,st,l,f,em;
      input >> l >> f >> em >> sNum >> sName >> city >> st >> zip
      >> m >> d >> y;
      Person p(l,f,em,sNum,sName,city,st,zip,m,d,y);
      p.printEmail(emailList);
    }
    else if(choice=='n'){
      choice='n';
    }
    input >> type;
  }

  temp.printStats(receiptOut);
  Fruit ft;
  ft.printInfo(receiptOut);
  Vegetable vt;
  vt.printInfo(receiptOut);
  receiptOut << "Total customers added to the mailing list: " << count << endl;
}

int main(int argc, char* argv[]){
  ifstream input;
  input.open(argv[1]);
  ofstream receiptOut;
  receiptOut.open(argv[2]);
  ofstream emailList;
  emailList.open(argv[3]);

  readData(input, receiptOut, emailList);

  input.close();
  receiptOut.close();
  emailList.close();

  return 0;
}
