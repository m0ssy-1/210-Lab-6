#include <iostream>
using namespace std;

const int size = 5;  // const array size


void inputArrayData(double arr, int size)
void outpusArrayData(double arr, int size);
double sumArray(double arr, int size);

int main() {

    double arr = new double[size];

    inputArrayData(arr, size);
    outputArrayData(arr, size);


    return 0;
}