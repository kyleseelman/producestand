#include "ProduceStand.h"
#include "Vegetable.h"
#include "Fruit.h"

int main(int argc, char* argv[]){
  ifstream input;
  input.open(argv[1]);
  ofstream receiptOut;
  receiptOut.open(argv[2]);
  ofstream emailList;
  emailList.open(argv[3]);
  string type=" ";
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
      break;
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
  }
  
  input.close();
  receiptOut.close();
  emailList.close();

  return 0;
}
