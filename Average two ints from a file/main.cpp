// Description: take two numbers of the file if the file exists, if the file
// does not exist, exit the program
// Name: Lab #?
// Developer: Pedro Enrique
// Last Modified 3/7/2011

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream inputFile;
	const int SIZE = 99;
	char name[SIZE];
	int num1;
	int num2;

	cout << "\tInput a filename and if it exists, it will take the\n"
		 << "\t     first two numbers and get the avergate.\n"
		 << "\t If the file does not exist, the program will end."
		 << endl << "\n";

	cout << "Please input a file name" << endl;
	cin.getline(name, SIZE);

	inputFile.open(name);
	if(!inputFile){
		cout << "Failed to open \"" << name << "\"\nExiting the program\n" << endl;
		system("pause");
		return -1;
	}

	inputFile >> num1;
	inputFile >> num2;
	cout << "\nFile contains: " << num1 << ", " << num2
		 << "\nThe average of those numbers is " << (num1+num2)/2.0 << "\n" << endl;

	inputFile.close();
	system("pause");
	return 0;
}