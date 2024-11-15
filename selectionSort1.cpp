#include <iostream>
using namespace std;

void selectionSortDescending(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) {
        int max = i; 

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max]) {
                max = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;

        cout << "Iteration " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[5] = {5, 2, 12, 7, 8}; 
    int n = 5;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSortDescending(arr, n);

    cout << "Sorted array in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
