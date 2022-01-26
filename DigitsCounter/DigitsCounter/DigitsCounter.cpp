#include <iostream>
using namespace std;

int main()
{
    //Count digits of a number
    int number;
    cout << "Number: ";
    cin >> number;
    
    if (number == 0)
        cout << "You have entered 0!";
    else {

        if (number < 0)
            number = -1 * number;

        int counter = 0;
        while (number > 0) {
            number /= 10; // to remove the last digit
            counter++;

        }
        cout << "Number contains " << counter << " digits.";
        
    }

    system("pause>0");
}