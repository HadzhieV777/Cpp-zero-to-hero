#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int lenght;
    cout << "Lenght: ";
    cin >> lenght;

    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    //regular triangle
    //for (int i = 1; i <= lenght; i++)
   // {
        //for (int j = 1; j <= i; j++)
        //{
           // cout<< setw(2) << symbol;
       // }
       // cout << endl;

    //}


    // reversed triangle
    for (int i = lenght; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;

    }

    system("pause>0");
}