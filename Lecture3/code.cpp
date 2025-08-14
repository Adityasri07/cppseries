#include <iostream>
using namespace std;

int main() {
    
    char ch;
   cout << "Enter a character: ";
   cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
         cout << "You entered an uppercase letter." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
         cout << "You entered a lowercase letter." << endl;
        }
        return 0;
    // ternary statement
    cout << (ch >= '0' && ch <= '9' ? "You entered a digit." : "You did not enter a digit.") << endl;
    }