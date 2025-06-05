#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int* ptr = arr;  
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);  
    }
    cout << "Sum of array elements = " << sum << endl;

    return 0;
}
