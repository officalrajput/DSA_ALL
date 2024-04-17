#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int start, int end) {
      int position = start;
    for(int i=start;i<=end;i++)
    {
        if(arr[i]<=arr[end])
        {
            swap(arr[i],arr[position]);
            position++;
        }
    }
    return position-1;
}

void QuickSort(int arr[], int start, int end) {
    // Base case
    if (start >= end) {
        return;
    }

    // Get the pivot index
    int P = partition(arr, start, end);

    // Recursive calls
    // Sort left of pivot
    QuickSort(arr, start, P - 1);

    // Sort right of pivot
    QuickSort(arr, P + 1, end);
}

int main() {
    int arr[] = {8, 1, 3, 4, 20, 50,50,50, 30};
    int n = 7;
    int start = 0;
    int end = n - 1;

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    QuickSort(arr, start, end);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
