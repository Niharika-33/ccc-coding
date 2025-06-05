//Print Address and Value of a Variable
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int* ptr = &num;  // Pointer stores the address of num

    // Print the address and value
    cout << "Address of num: " << ptr << endl;
    cout << "Value of num using pointer: " << *ptr << endl;

    return 0;
}
