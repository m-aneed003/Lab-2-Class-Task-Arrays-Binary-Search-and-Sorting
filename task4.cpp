#include <iostream>
using namespace std;

int bubbleSort(int arr[], int size) {
    int passes = 0;
    bool swapped;
    
    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        passes++;
        
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        
        if (!swapped) {
            break;
        }
    }
    
    return passes;
}

int main() {
    int arr1[] = {9, 7, 5, 3, 1};
    int size1 = 5;
    
    int passes1 = bubbleSort(arr1, size1);
    
    cout << "Array 1 sorted: ";
    for (int i = 0; i < size1; i++) {
        cout << arr1[i] << " ";
    }
    cout << " Passes: " << passes1 << "\n";
    
    int arr2[] = {1, 2, 3, 4, 5};
    int size2 = 5;
    
    int passes2 = bubbleSort(arr2, size2);
    
    cout << "Array 2 sorted: ";
    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << " ";
    }
    cout << " Passes: " << passes2 << "\n";

    return 0;
}