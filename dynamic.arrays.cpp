#include <iostream>
using namespace std;

const int SIZE = 5;  // const array size


void inputArrayData(double* arr, int SIZE);
void outputArrayData(double* arr, int SIZE);
double sumArray(double* arr, int SIZE);

void inputArrayData(double*)


int main() {

    double* arr = new double[SIZE];

    // call functions
    inputArrayData(arr, SIZE);
    outputArrayData(arr, SIZE);
    double total = sumArray(arr, SIZE);
    cout << "Sum of values: " << total << endl;

    return 0;
}

 void inputArrayData(double* arr, int size) {

    cout << "data entry for the arayL: " << endl;

    for (int i= 0; i < size; i++)

    cout << "(sometihng)" << i << "(something)" << endl;

    cin >> (arr + i) >> endl;
    
 }