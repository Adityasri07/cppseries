#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n<= 1) return false;
    for(int i = 2; i*i <= n; i++){
        if (n%i == 0) return false;
    } 
    return true;
}

int main(){
    int num = 10;

    if (isPrime(num)){
        cout << num<< " is Prime" << endl;
    }else {
        cout << num <<  "is not Prime" << endl;
    }
    return 0;
}