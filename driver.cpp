#include "ProduceStand.h"
#include "Vegetable.h"
#include "Fruit.h"

int main(int argc, char* argv[]){
  ifstream input;
  input.open(argv[1]);
  ofstream receiptOut;
  receiptOut.open(argv[2]);
  ofstream email;
  email.open(argv[3]);
  string type;
  char choice;
  int count=0;
  
  while(!input.eof()){
    input >> type;
    
    if(type=="Vegetable"){
      Vegetable v(input,receiptOut);
    }
    else if(type=="Fruit"){
      Fruit f(input,receiptOut);
    }
    else{
      cout << "Error. Unknown type\n";
    }
    
    input >> choice;
    if(choice=='y'){
      string l,f,em,sName,city,st;
      int sNum,zip;
      input >> l >> f >> em >> sNum >> sName >> city >> st >> zip;
      Person p(l,f,em,sNum,sName,city,st,zip);
      count++;
    } 
  }
  
  input.close();
  receiptOut.close();
  email.close();

  return 0;
}
