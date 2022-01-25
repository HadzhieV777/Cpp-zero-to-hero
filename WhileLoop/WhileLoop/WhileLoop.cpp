#include <iostream>
using namespace std;

int main()
{
     //Write out all the numbers between 100-500 that are
    //divisible by 3 and 5

    int i = 100;
    while (i <= 500) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << i << " can be divided by 3 and 5.\n";
        i++;

    }


    system("pause>0");
}
