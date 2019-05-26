#include <iostream>
#include <list>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  
  
  double largestcandidate = 0;
  
  double number = 600851475143;
  
  //float number = 13195;
  bool viable = false;

  double i = 2;

  do{

    

    long double temp = number/i;

    if(floor(temp) == temp){
      long long  temp2 = floor(temp);
      viable = true;
      for(long long x = 2; x < temp2 && viable; x++)
	{

	  //cout << x << endl;
	  if(temp2 % x == 0)
	    {    
	    
	      viable = false;
	      
	    }
	
	}

      if(viable){
	largestcandidate = temp;
      }

    }
    if(i > number)
      {
	viable = true;
      }
    else{
      i++;
    }
  }while(viable == false);

  


  cout << largestcandidate << endl;
  
  return 0;

}
