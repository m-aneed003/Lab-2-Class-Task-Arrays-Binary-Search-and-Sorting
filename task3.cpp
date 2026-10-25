#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    const int SIZE = 6;
    int numbers[SIZE];

    cout << "Enter 6 numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    selectionSort(numbers, SIZE);

    cout << "Sorted: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    cout << "Smallest: " << numbers[0] << "\n";
    cout << "Largest: " << numbers[SIZE - 1] << "\n";

    return 0;
}