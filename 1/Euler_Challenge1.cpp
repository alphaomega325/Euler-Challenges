#include <string>
#include <iostream>
#include <list>
using namespace std;

int main(){
  
  std::list<int> list = {};

  int i = 3;
  
  while(i < 1000){
    
    list.push_back(i);
    i +=3;

  }

  i = 5;

  while(i < 1000){
    list.push_back(i);
    i+=5;
    
  }


  
  list.sort();

  list.unique();
  int total = 0;
  cout << "The number are.\n";
  while(!list.empty()){

    total += list.front();
    list.pop_front();

  }

  cout << total << "\n";
  
  return 0;
  
}
