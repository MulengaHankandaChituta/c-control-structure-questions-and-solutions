//Convert integer to char

#include <iostream>
using namespace std;

int main() {
    int asciiValue;

    cout << "Enter asciiValue" << endl;
    cin >> asciiValue;
    cout << endl;
    
    // Convert integer to char using static_cast
    char character = static_cast<char>(asciiValue);
    
    cout << "The character for ASCII value " << asciiValue << " is: " << character << endl;
    
    return 0;
}