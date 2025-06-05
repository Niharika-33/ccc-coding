//Pointer to Pointer (Double Pointer)
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int* ptr = &num;       
    int** ptr2 = &ptr;     
    cout << "Value of num: " << num << endl;
    cout << "Value using single pointer (*ptr): " << *ptr << endl;
    cout << "Value using double pointer (**ptr2): " << **ptr2 << endl;

    return 0;
}
