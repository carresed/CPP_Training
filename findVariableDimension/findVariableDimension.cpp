// C++ program to find the size of int, char, 
// float and double data types 
#include <iostream> 
#include "findVariableDimension.hpp"

using namespace std; 

int main() 
{ 
  // int
	cout << "Size of int is: " << sizeof(integerType) 
		<< "\n"; 

	// doubleType 
	cout << "Size of char is: " << sizeof(charType) << "\n"; 

	// charType 
	cout << "Size of float is: " << sizeof(floatType) 
		<< "\n"; 

	// floatType 
	cout << "Size of double is: " << sizeof(doubleType) 
		<< "\n"; 

	return 0; 
}
