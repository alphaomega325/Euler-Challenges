#include <iostream>
#include <list>
using namespace std;

std::list<long> get_primes(long limit); 

int main(){

  long limit = 2000000;

  std::list<long> answer = get_primes(limit);
  long result = 0; 
  for(auto it = answer.begin(); it != answer.end(); it++){

    result += *it;
  }
  cout << result << endl;
  
}


std::list<long> get_primes(long limit){

  std::list<long> answer = {2};
  
  for(long i = answer.front(); i < limit; i++){
    bool viable = true;
    for(auto it = answer.begin(); it != answer.end() && viable; it++){
      
      if(i % *it ==0){

	viable = false;
	
      }

    }

    if(viable){
      answer.push_back(i);
    }

  }

  return answer;
  
}
