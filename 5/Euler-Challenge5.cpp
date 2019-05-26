#include <iostream>
#include <list>


using namespace std;

int main(){

  int limit = 20;
  std::list<int> numbers = {};
  for(int i = 1; i < limit + 1; i ++){

    numbers.push_back(i);

  }

  int candidate=0;
  for(int i = numbers.back(), answer = false; answer == false; i += numbers.back()){
    answer = true;
    candidate = i;
    for(auto it = numbers.rbegin(); it != numbers.rend() && answer; it++)
      {

	if(i % *it != 0)
	  {
	    answer = false;
	  }

      }
    

  }

  cout << candidate << endl;
  
}
