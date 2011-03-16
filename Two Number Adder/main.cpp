// Description: take two integers and add them
// Name: Two Number Adder
// Developer: Pedro Enrique
// Last Modified 3/15/2011

#include <iostream>
using namespace std;

int main (){
    int a, b;
    cout << "\n"
         << "\tTwo number adder \n"
         << "\t by P. Enrique"
         << "\n\n";
    
    cout << "Please, give me an integer: ";
    cin >> a;
    cout << "Please, give me another integer: ";
    cin >> b;
    cout << "\n";
    
    cout << "The sum of \"" << a << " + "<< b <<" =\" " << a+b
         << "\n";
    
    //if Windows: system("pause");
        
    return 0;
}

