#include <iostream>
using namespace std;

int binarySearchDescending(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        
        // Changed comparison for descending order array
        if (arr[mid] > key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1;
}

void searchAndPrint(int arr[], int size, int key) {
    int result = binarySearchDescending(arr, size, key);
    if (result != -1) {
        cout << key << " found at index " << result << "\n";
    } else {
        cout << key << " not found\n";
    }
}

int main() {
    int arr[] = {90, 75, 60, 45, 30, 15};
    int size = 6;

    searchAndPrint(arr, size, 45);
    searchAndPrint(arr, size, 50);

    return 0;
}