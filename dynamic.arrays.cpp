#include <iostream>
using namespace std;

const int SIZE = 5;  // const array size

void inputArrayData(double* arr, int SIZE);
void outputArrayData(double* arr, int SIZE);
double sumArray(double* arr, int SIZE);

int main() {

    double* arr = new double[SIZE];

    // call functions
    inputArrayData(arr, SIZE);
    outputArrayData(arr, SIZE);
    double total = sumArray(arr, SIZE);
    cout << "Sum of values: " << total << endl;

    delete[] arr;

    return 0;
}

// function for value inputs into array
 void inputArrayData(double* arr, int size) {

    cout << "Data entry for the array:" << endl;

    for (int i= 0; i < size; i++) {

    cout << "   > Element # " << i << ": ";

    cin >> *(arr + i);
    }
    cout << "Data entry complete." << endl;

 }

// funtion to outpit array elements
 void outputArrayData(double* arr, int size) {

    cout << "Outputting array elements: ";

    for (int i = 0; i < size; i++) {

        cout << *(arr + i) << ", ";

    }
    cout << endl;
 }

 //funtion to calc and retrn sum of array
 double sumArray(double* arr, int size) {

    double sum = 0.0;

    for (int i = 0; i < size; i++) {

       sum += *(arr +i);

    }

    return sum;
}