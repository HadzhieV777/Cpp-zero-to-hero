#include <iostream>
using namespace std;

void main() {
    // Reversing number

    int number, reversedNumber = 0;
    cout << "Number: ";
    cin >> number;

    while (number != 0) {
        reversedNumber *= 10;

        // int lastDigit = number % 10;
        reversedNumber += number % 10;
        // takes the last digit of the user's input and adds it to the reversedNumber

        number /= 10;// removing the last digit from the user's input
    }

    cout << "Reversed: " << reversedNumber;

    system("pause>0");
}