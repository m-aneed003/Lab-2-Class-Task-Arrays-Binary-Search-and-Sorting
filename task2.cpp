#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == key) {
        return mid;
    }

    if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key);
    }

    return binarySearch(arr, mid + 1, high, key);
}

int main() {
    int prices[] = {50, 120, 175, 240, 300, 450, 620};
    int size = 7;
    int searchPrice;

    cout << "Enter price to search: ";
    cin >> searchPrice;

    int result = binarySearch(prices, 0, size - 1, searchPrice);

    if (result != -1) {
        cout << searchPrice << " found at index " << result << "\n";
    } else {
        cout << searchPrice << " not found\n";
    }

    return 0;
}