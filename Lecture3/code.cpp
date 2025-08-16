#include <iostream>
using namespace std;

int main() {
  int n = 20;
  int i=1;
  int oddSum = 0;

  while (i<=n){
    if (i% 2 !=0){
        oddSum += i;
    }
    i++;
  }
  cout << "Sum of odd numbers from 1 to " << n << " is: " << oddSum << endl;
return 0;

}