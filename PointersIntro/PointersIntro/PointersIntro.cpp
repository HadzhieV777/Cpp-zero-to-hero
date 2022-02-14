#include <iostream>
using namespace std;

int main()
{
    //Pointers are variables that return the address where they are stored
    int n = 5;
    cout << &n << endl;

    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = 10;
    cout << *ptr << endl;

    // The pointer must be of the same type as the variable
    //We can use the pointers for a dynamic memory allocation  

    system("pause>0");
}