// Description: Reads Characters as numbers
// Name of Program: Find the order of letters
// Programmer: Pedro Enrique
// Last Modified: 3/8/11

#include <iostream>
using namespace std;

int main(){
    char a;
    int b;
    cout << " \tThis program reads letters and\n"
    << " finds their position in the alphabet\n"
    << " \t\tby Pedro Enrique\n"<<endl;
    
    while (true){
        cout << "------------------------------------------"<<endl;
        cout << "Please Enter a Letter" << endl;
        cin >> a;
        cin.ignore(80, '\n');
        
        if(a >= 'a' && a <= 'z')
            b = a - 'a' + 1;
        else if(a >= 'A' && a <= 'Z')
            b = a - 'A' + 1;
        if(a < 'A' || a > 'z'){
            cout << "is is not a letter ";
            cout << a;
            
            //system("pause");
            return 0;
        }
        
        cout << "The digit enetered is: '" << a << "', which is: " << b;
        switch(b){
            case 1:cout << "st" << endl; break;
            case 2:cout << "nd" << endl; break;
            case 3:cout << "rd" << endl; break;
            default:cout << "th" << endl;
        }
        
        //system("pause");
        //system("cls");
    }
}
