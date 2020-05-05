#include <iostream>

int main()
{
    // Input
    int[] arr = {10, 392, 43, -32, 14};
    int n = sizeof(arr) / sizeof(int);

    for (int k = 0; k < n; k++) {
        std::cin >> arr[k];
    }

    // Sort
    for (int k = 0; k < n - 1; k++) {
        int minIndex = k;

        for (int m = k; m < n; m++) {
            if (arr[minIndex] > arr[m]) {
                minIndex = m;
            }
        }

        int temp = arr[k];
        arr[k] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Output
    for (int k = 0; k < n; k++) {
        std::cout << arr[k] << " ";
    }
}