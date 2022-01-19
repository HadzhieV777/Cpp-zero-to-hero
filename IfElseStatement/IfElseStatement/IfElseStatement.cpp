#include <iostream>
using namespace std;

int main()
{
    //User enters integer number 
    //Program write out if the int is even or odd

    int number;
    cout << "Please enter a number ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Your number is even." << endl;
    }
    else {
        cout << "Your number is odd." << endl;
    }



    system("pause>0");
}
