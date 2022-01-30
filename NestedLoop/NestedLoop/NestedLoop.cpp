#include <iostream>
using namespace std;

int main()
{
    int grade, sum = 0;

    for (int i = 0; i < 3; i++) {

        do {
            cout << "Enter grade " << i + 1 << ": ";
            cin >> grade;

        } while (grade < 1 || grade > 6);
        sum += grade;
    }

    cout << "Sum = " << sum << endl;
    cout << "Average grade is " << (float)sum / 3 << endl;

    system("pause>0");
}