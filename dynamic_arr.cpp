//Dynamic Memory Allocation for Array Using Pointers
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int* ptr = new int[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i);  
    }
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";  
    }
    cout << endl;
    delete[] ptr;
    return 0;
}
