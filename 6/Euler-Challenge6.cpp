#include <iostream>
#include <list>
#include <iomanip>

using namespace std;

long double sum_of_square(list<int> number);

long double square_of_sum(list<int> number);

int main(){

  int limit = 100;
  std::list<int> number = {};

  for(int i = 1; i < limit + 1; i++)
    {
      number.push_back(i);

    }
  
  long double answer = square_of_sum(number) - sum_of_square(number);

  cout << setprecision(10) << showpoint;
  cout << answer << endl;
  
}


long double sum_of_square(list<int> number){
  long double result = 0;

  for(auto it = number.begin(); it != number.end(); it++){

    result = *it * *it + result;
    
  }

  return result;

}

long double square_of_sum(list<int> number){
  long double result = 0;

  for (auto it = number.begin(); it != number.end(); it++)
    {
      
      result += *it;
      
    }

  result *= result;

  return result;
  
}
