#include <iostream>
using namespace std;
//function definition
int sumN(int n){ //parameters
  int sum = 0; 
  for (int i=1; i<=n;i++){
    sum += i; //sum = sum + i
  }
  return sum; //returning the sum
}
  int main() {
   cout << sumN(5) << endl; //function call
   cout << sumN(10) << endl; //function call
   return 0;

}
