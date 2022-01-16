#include <iostream>
using namespace std;

int main()
{
    float annualSalary;
    cout << "Please enter your annual salary ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In 10 years you will earn " << annualSalary * 10;

    /// Vars cannot start with num
    /// the only valid symbol to use is "_"
    /// cannot use " "blank space in var names
    /// camel case is prefered 
    
    char character = 'a';


    system("pause>0");
}