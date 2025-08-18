#include <iostream>
using namespace std;
//function definition
int printHello(){
    cout << "Hello, World!" << endl;
    return 3;
}
int main() {
    //function call/invoke
  int val =  printHello();
    cout << "The value returned by printHello is: " << val << endl;
    cout << printHello() << endl;
   return 0;

}
