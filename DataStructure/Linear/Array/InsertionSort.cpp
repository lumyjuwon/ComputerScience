#include <iostream>

int main()
{
    // Input
    int arr[] = {10, 392, 43, -32, 14};
    int n = sizeof(arr) / sizeof(int);

    // Sort
    for (int k = 1; k < n; k++) {
      for (int m = k; m > 0; m--) {
        if (arr[m - 1] > arr[m]) {
            int temp = arr[m];
            arr[m] = arr[m - 1];
            arr[m - 1] = temp;
        }
      }
    }

    // Output
    for (int k = 0; k < n; k++) {
        std::cout << arr[k] << " ";
    }
}