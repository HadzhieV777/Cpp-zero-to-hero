#include <iostream>
using namespace std;


template<typename T>
//the T in the template is a generic func and can work with any var type

void Swap(T& a, T& b) {
    //swap vals of two int variables
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 7;

    cout << a << " - " << b << endl;
    Swap(a, b);
    cout << a << " - " << b << endl;

    char c = 'c', d = 'd';

    cout << c << " - " << d << endl;
    Swap(c, d);
    cout << c << " - " << d << endl;


    system("pause>0");
}