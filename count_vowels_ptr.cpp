// Count Vowels in a String Using Pointers
#include <iostream>
using namespace std;

int main() {
    char str[100];
    char* ptr;
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);  
    ptr = str;  
    while (*ptr != '\0') {
        char ch = *ptr;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
        ptr++; 
    }

    cout << "Number of vowels = " << count << endl;
    return 0;
}
