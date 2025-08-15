#include <iostream>
using namespace std;

int main() {
   int n = 7;
   bool isPrime = true;
   for (int i = 2; i*i<= n; i++){
        if (n%2 == 0){
            isPrime = false;
            break;
        }
   }

   if (isPrime == true) {
    cout << "prime number\n";
   }else{
    cout << "not a prime number\n";
   }

    
return 0;

}