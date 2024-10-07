#include <iostream>
using namespace std;

void inputArray(double* arr, int n) {
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int countPositiveElements(double* arr, int n) {
    int positiveCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        }
    }
    return positiveCount;
}

double sumAfterLastZero(double* arr, int n) {
    double sum = 0;
    bool foundZero = false;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            foundZero = true;
            break;
        }
        sum += arr[i];
    }
    return foundZero ? sum : 0;
}

void transformArray(double* arr, int n, double* transformedArr) {
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (int(arr[i]) <= 1) {
            transformedArr[index++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (int(arr[i]) > 1) {
            transformedArr[index++] = arr[i];
        }
    }
}

void printArray(double* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of array elements: ";
    cin >> n;

    double* arr = new double[n];

    inputArray(arr, n);

    int positiveCount = countPositiveElements(arr, n);
    cout << "The number of positive array elements: " << positiveCount << endl;

    double sum = sumAfterLastZero(arr, n);
    cout << "The sum of the elements after the last zero: " << sum << endl;

    double* transformedArr = new double[n];
    transformArray(arr, n, transformedArr);

    cout << "Converted array:\n";
    printArray(transformedArr, n);

    delete[] arr;
    delete[] transformedArr;

    return 0;
}
