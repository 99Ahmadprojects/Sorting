#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int left = low + 1;
    int right = high;

    while (left <= right) {
        while (left <= high && arr[left] > pivot) {
            left++;
        }
        while (right >= low && arr[right] < pivot) {
            right--;
        }
        if (left < right) {
            swap(arr[left], arr[right]);
        }
    }

    swap(arr[low], arr[right]);
    return right;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high); // Find pivot position
        quickSort(arr, low, pivotIndex - 1);  // Sort left sub-array
        quickSort(arr, pivotIndex + 1, high); // Sort right sub-array
    }
}

int main() {
    int arr[7] = {5, 1, 6, 10, 8, 3, 7};
    int n = 7;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array in descending order: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
