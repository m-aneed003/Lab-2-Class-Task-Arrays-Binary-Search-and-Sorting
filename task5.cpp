#include <iostream>
using namespace std;

int insertionSort(int arr[], int size) {
    int shifts = 0;
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            shifts++;
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return shifts;
}

int main() {
    int arr[] = {23, 11, 45, 8, 30};
    int size = 5;

    int totalShifts = insertionSort(arr, size);

    cout << "Sorted: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "Shifts: " << totalShifts << "\n";

    return 0;
}