
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is " << sum << "." << endl;
    cout << "difference = " << (a-b) << endl;  
    cout << "product = " << (a*b) << endl;
    cout << "quotient = " << (a/b) << endl;
    cout << "modulo = " << (a%b) << endl;
    cout << (5/(double)2) << endl; // Corrected to cast 2 to double for floating-point division

// relational operators
    int x = 10, y = 20;
    cout << "x == y: " << (x == y) << endl;
    cout << "x != y: " << (x != y) << endl;
    cout << "x < y: " << (x < y) << endl;
    cout << "x > y: " << (x > y) << endl;
    cout << "x <= y: " << (x <= y) << endl;
    cout << "x >= y: " << (x >= y) << endl;
    // logical operators
    cout << (3>1) << endl; // true
    cout << !(3<1) << endl; // false
    cout << ( (3>1) || (2<1) ) << endl; // true
    cout << ( (3<1) && (2<1) ) << endl; // false











}

