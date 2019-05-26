#include <iostream>
#include <string>
using namespace std;

int main(){

  int solution[3] = {0,0,0};

  int limit = 1000;

  for(int i = limit -1; i > 0; i--){

    for(int p = limit - 1; p > 0; p--){

      string answer = to_string(i * p);
      string checker;
      for(auto i = answer.rbegin(); i != answer.rend(); i++){

	checker.push_back(*i);
	
      }

      if((answer == checker) && (i*p > solution[2])){
	solution[0] = i;
	solution[1] = p;
	solution[2] = i*p;
      }
      

    }
    
  }

  cout << solution[0] << " " << solution[1] << " " << solution[2] << endl;


}


