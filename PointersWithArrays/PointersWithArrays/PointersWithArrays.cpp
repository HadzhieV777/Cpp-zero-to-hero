#include <iostream>
using namespace std;

int main()
{
    /*
    int luckyNumbers[5]{2, 3, 5, 7, 9};
    cout << luckyNumbers << endl; // will return the address of the array
    cout << &luckyNumbers[0] << endl; // will return the address of the  first num in the array
    
    cout << luckyNumbers[2] << endl; // will return the value of the third num in the array
    cout << *(luckyNumbers + 2) << endl; // will return the same result as the above line
    */

    int luckyNumbers[5];

    for (int i = 0; i <= 4; i++) {
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }

    //the below loop will return the value of each el in the array
    for (int i = 0; i <= 4; i++) {
        cout << *(luckyNumbers + i) << "   ";
    }

    system("pause>0");
    return 0;
}