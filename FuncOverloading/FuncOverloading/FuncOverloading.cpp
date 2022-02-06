#include <iostream>
using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
    //Functions overloading allow us to crate 
    // multiple functions with same name
    //but with different params

    cout << sum(3, 4) << endl;
    cout << sum(3.3, 4.4) << endl;
    cout << sum(3.3, 4.4, 2.2);

    system("pause>0");
}

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

float sum(float a, float b, float c) {
    return a + b + c;
}