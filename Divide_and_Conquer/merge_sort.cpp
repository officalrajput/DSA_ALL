#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int start, int mid, int end) {
    // Find the len of left array and right array
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // Create new arrays for left and right
    int* left = new int[len1];
    int* right = new int[len2];

    // Copy data to temp arrays left[] and right[]
    int k = start;
    for (int i = 0; i < len1; i++) {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++) {
        right[i] = arr[k];
        k++;
    }

    // Merge the temp arrays back into arr[l..r]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int currentIndex = start; // Initial index of merged subarray

    while (i < len1 && j < len2) {
        if (left[i] >= right[j]) {
            arr[currentIndex] = left[i];
            i++;
             currentIndex++;
        } else {
            arr[currentIndex] = right[j];
            j++;
             currentIndex++;
        }
       
    }

    // Copy the remaining elements of left[], if there are any
    while (i < len1) {
        arr[currentIndex] = left[i];
        i++;
        currentIndex++;
    }

    // Copy the remaining elements of right[], if there are any
    while (j < len2) {
        arr[currentIndex] = right[j];
        j++;
        currentIndex++;
    }

    // // Clean up memory
    // delete[] left;
    // delete[] right;
}

void mergeSort(vector<int>& arr, int start, int end) {
    if (start >= end)
        return; // Base case: if array size is 0 or 1, already sorted

    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid); // Sort first half
    mergeSort(arr, mid + 1, end); // Sort second half
    merge(arr, start, mid, end); // Merge the sorted halves
}

int main() {
    vector<int> arr{2, 5, 1, 9, 4};
    int n = arr.size();
    int start = 0;
    int end = n - 1;

    mergeSort(arr, start, end);

    // Print the sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
