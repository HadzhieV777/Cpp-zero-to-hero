#include <iostream>
using namespace std;

int main()
{
	int yearOfBirth = 1995;
	char gender = 'f';
	
	bool isOlderThan18 = true;

	float averageGrade = 4.5;
	//float/int takes 4 bytes 32 bits
	//double takes 8 bytes
	
	double balance = 452354234324;
	//double takes 8 b
	
	cout << "Size of int is " << sizeof(int) << " bytes\n"; 

	cout << "Int min value is " << INT_MIN << endl;

	cout << "Int max value is " << INT_MAX << endl;
	// the min value (-2147483648) and the max value(2147483647)
	// is not equal because the pos value include 0 as well
	system("pause>0");
}