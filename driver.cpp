#include "ProduceStand.h"

int main(int argc, char* argv[]){
  ifstream input.open(argv[1]);
  ofstream receiptOut.open(argv[2]);
  ofstream customers.open(argv[3]);
  string type;
  char choice;
  int count=0;
  
  while(!input.eof()){
    input >> type;
    
    if(type=="Vegetable"){
      Vegetable v;
      v(input,receiptOut);
    }
    else if(type=="Fruit"){
      Fruit f;
      f(input,receiptOut);
    }
    else{
      cout << "Error. Unknown type\n";
    }
    
    input >> choice;
    if(choice=='y'){
      Person p;
      count++;
      p(input,customers);
    } 
  }
  
  return 0;
}
