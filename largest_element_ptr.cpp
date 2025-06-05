//Implement a Function that Returns a Pointer to the Largest Element in an Array
#include <iostream>
using namespace std;

int* largestElement(int arr[], int n) {
    int* largest = &arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > *largest) {
            largest = &arr[i];
        }
    }

    return largest;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int* ptr = largestElement(arr, n);

    cout << "Largest element is: " << *ptr << endl;
    cout << "Address of largest element: " << ptr << endl;

    return 0;
}
