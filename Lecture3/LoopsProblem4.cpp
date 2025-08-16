#include <iostream>
using namespace std;

int main() {
   int n = 31;
   bool isPrime = true;

   for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
   }
   cout << n << " is " << (isPrime ? "a prime number." : "not a prime number.") << endl;
return 0;

}
