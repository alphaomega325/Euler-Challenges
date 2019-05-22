#include <iostream>
#include <list>
using namespace std;

std::list<long> fibbonacci(long limit);


int main()
{
  
  long limit = 4000000;
  
  std::list<long> result = fibbonacci(limit);

  long total = 0;
  for(auto i = result.begin(); i != result.end(); i++){
    cout << *i << endl;
    
    if((*i%2) == 0){
      total += *i;
    }
  }


  cout << total << endl;




    return 1;


}


std::list<long> fibbonacci(long limit){

  std::list<long> fibresult = {};

  long a = 0;
  long b = 1;
  
  while(a < limit)
    {
      
      fibresult.push_back(a);
     
      fibresult.push_back(b);
      
      a = a+b;
      b = b+a;
      

    }

  return fibresult;
}
