// Fiboancci_Sequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int size;
    int a = 1;   
    int b = 0;
    int sum;


    cout << "How many number do you want" << endl;
    cin >> size; 
    cout << endl;

    int* tab = new int[size]; //creating a dynamic table using "size"

    cout << "Your fibonacci table: " << endl << endl;
    for (int i = 0; i < size; i++) { 
        //algorithm to create a fibonacci sequence
        sum = a + b;
        tab[i] = sum; 
        a = tab[i]; 
        if (i == 0) {
            b = b; 
        }
        else b = tab[i - 1]; 
        //placing numbers nicely for better visibility
        if (i % 5 != 0 || i == 0) { 
            cout << tab[i] << "\t"; 
        }
        else cout << endl << tab[i] << "\t";
    }

    delete[] tab; 
    cout << endl;

    return 0;
}
