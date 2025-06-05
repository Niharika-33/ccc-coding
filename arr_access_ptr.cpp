//Access Array Elements Using Pointers
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {100, 200, 300, 400, 500};
    int* ptr = arr;  

    cout << "Array elements:\n";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    return 0;
}
