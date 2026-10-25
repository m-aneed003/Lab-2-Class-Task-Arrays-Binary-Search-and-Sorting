#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        
        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int ages[] = {12, 15, 18, 21, 25, 30, 34, 41};
    int size = 8;
    int searchAge;

    cout << "Enter age to search: ";
    cin >> searchAge;

    int result = binarySearch(ages, size, searchAge);

    if (result != -1) {
        cout << searchAge << " found at index " << result << "\n";
    } else {
        cout << searchAge << " not found\n";
    }

    return 0;
}