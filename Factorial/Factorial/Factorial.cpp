#include <iostream>
using namespace std;

int main()
{
    //Finding the factorial of a number using for loop

    int number;
    cout << "Number: ";
    cin >> number;
   
    int factorial = 1;

    //6!=1*2*3*4*5*6=720
    //for (int i = 1; i <= number; i++) {
        //factorial = factorial * i;
    //}

    //6!=6*5*4*3*2*1=720
    for (int i = number; i >= 1; i--) {
        factorial = factorial * i;
    }
    cout << number << "!=" << factorial;

    system("pause>0");
}