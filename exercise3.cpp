//Write a program that prompts the user to input an integer between 0 and 35.
//If the number is less than or equal to 9, the program should output the number;
//otherwise, it should output A for 10, B for 11, C for 12,....,and Z for 35.
//(Hint: Use the static cast operator,static_cast<char>(), for numbers >= 10.)

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number between 0 and 35: " << endl;
    cin >> num;
    

    if (num <= 9)
        cout << "The number is: " << num << endl;
    else if (num >= 9 && num <= 35)
        cout << "The corresponding letter is: " << static_cast<char>('A' + (num - 10)) << endl;

    return 0;
}