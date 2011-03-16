// Description: Read your name with quotes and greet
// Name: Read you name and greet with quotes
// Developer: Pedro Enrique
// Last Modified 3/15/2011

#include <iostream>
using namespace std;

int main (){
    const int SIZE = 20;
    char a[SIZE];
    
    cout << "\t\tThe greeting lab \n"
    << "\t\t  by Pedro \n" << endl;
    
    cout << "What is your name?"<<endl;
    cin >> a;
    cout << "Hello \"" << a << "\"\n" << endl;
    
    // if Windows: system("pause");
    
    return 0;
}

