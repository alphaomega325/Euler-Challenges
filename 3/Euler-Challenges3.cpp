#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

std::list<long> filllist(std::list<long> list, long number, long candidate)
{

  long original = candidate;
  while(candidate <= number){
    list.push_back(candidate);
    candidate += original;

  }
  cout << original << endl;
  return list;

}

long findnextprime(std::list<long> nonprimes, std::list<long> primes, long candidate){

  bool found = false;
  while(found != true)
    {
      candidate++;
      
      if(std::find(nonprimes.begin(), nonprimes.end(), candidate) == nonprimes.end())
	{

	  found = true;
        
	}

    }

    
  return candidate;
}

int main()
{

  std::list<long> nonprimes = {};
  std::list<long> primes = {};
  long largestcandidate = 0;
  
  long number = 600851475143;

  //long number = 13195;
  
  long candidate = 2;
  
  
  while(candidate < number){
    
    nonprimes = filllist(nonprimes , number,  candidate);
    nonprimes.sort();
    nonprimes.unique();
    
    if(candidate * candidate > number)
      {

	for(auto it = primes.rbegin(); it != primes.rend(); it++){ 

	  if(number % *it == 0){
	    largestcandidate = *it;
	    break;
	  }
	}

	break;
      }
    
    candidate = findnextprime(nonprimes, primes, candidate);
    primes.push_back(candidate);
    
  }


  cout << largestcandidate << endl;
  
  return 0;

}
