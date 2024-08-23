// Write a program that prompts the user to input a number.
//The program should then output the number and a message saying
//whether the number is positive negative or zero.

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number" << endl;
    cin >> num;

    if (num == 0)
        cout << "Num is equal to zero" <<  endl;
        else if (num > 0)
            cout << "Number is positive" << endl;
            else if (num < 0)
                cout << "Number is negative" << endl;

    return 0;
}