
#include <iostream>
using namespace std;

int main()
{
    //cout << "Hello World!\n";
    //cout << "My name is Rado."<<endl;
    //cout << "Today is Wednesday.";
    
    float annualSalary;
    cout << "Please enter your annual salary ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary;
    cout << "In 10 years you will earn " << annualSalary * 10;

    
    system("pause>0");
}
