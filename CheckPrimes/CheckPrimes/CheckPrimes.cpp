#include <iostream>
using namespace std;

bool isPrimeNumber(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

void main()
{
    int number;
    cout << "Number: ";
    cin >> number;
     
    bool isPrimeFlag = isPrimeNumber(number);

    if (isPrimeFlag) 
        cout << "Number " << number <<  " is prime." << endl;
    else
        cout << "Number " << number << " is not prime." << endl;

    system("pause>0");
}