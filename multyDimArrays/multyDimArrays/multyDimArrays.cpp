#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Rows, cols: ";
    cin >> rows >> cols;

    int** table = new int*[rows];//pointer to another pointer

    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols]; //creating the dynamic arrays
    }

    table[1][2] = 88; // will store 88 to the el with row index 1 and col index 2

    //deallocating 
    for (int i = 0; i < rows; i++) {
        delete[] table[i];
    }
    delete[] table;
    table = NULL;

    system("pause>0");
    return 0;
}