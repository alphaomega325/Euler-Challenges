#include <iostream>
#include <array>
#include <cmath>


using namespace std;

int main(){

  std::array<long double, 10001> primes = {2};
  int location = 1;
  for(long double i = primes.front() + 1; primes.back() == 0; i++)
    {
      bool viable = true;
      for(int it = 0; primes[it] != 0 && viable; it++)
	{

	  if(std::fmod(i, primes[it]) == 0)
	    {
	      viable = false;
	    }
	  
	}

      if(viable){
	cout << i << endl;
	primes[location] = i;
	
	location++;
      }
      

    }

  cout << primes[location - 1] << endl;

}
