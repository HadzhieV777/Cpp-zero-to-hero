#include <iostream>
using namespace std;

int main()
{
    /*
    A dynamic array is quite similar to a regular array, 
    but its size is modifiable during program runtime. 
    DynamArray elements occupy a contiguous block of memory. 
    Once an array has been created, its size cannot be changed. 
    However, a dynamic array is different.
    */


    int size;
    cout << "Size: ";
    cin >> size;

    int* myArray = new int[size];//locate

    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "] ";
        cin >> myArray[i];
    }

    for (int i = 0; i < size; i++) {
        //cout << myArray[i] << " ";
        cout << *(myArray+i) << " ";
    }

    delete[]myArray;//alocate
    myArray = NULL;

    system("pause>0");
}