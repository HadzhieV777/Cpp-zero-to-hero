#include <iostream>
using namespace std;

int main()
{
    //Terrnary(Conditional) operator exercise
    int hostUserNumber, guestUserNmber;
    cout << "Host: ";
    cin >> hostUserNumber;
    system("cls");

    cout << "Gueset: ";
    cin >> guestUserNmber;

    (hostUserNumber == guestUserNmber)? cout << "Correct!": cout << "Failed!";

   /* if (hostUserNumber == guestUserNmber)
        cout << "Correct!";
    else
        cout << "Failed!"; */ 

    system("pause>0");

}
