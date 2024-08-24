//Write a program that prompts the user to input three numbers.
//The program should then output the numbers ascending order.

#include <iostream>

using namespace std;

int main() {
    // Get three numbers from the user
    int num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    // Compare and sort the numbers using if statements
    int smallest, middle, largest;

    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
        if (num2 <= num3) {
            middle = num2;
            largest = num3;
        } else {
            middle = num3;
            largest = num2;
        }
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
        if (num1 <= num3) {
            middle = num1;
            largest = num3;
        } else {
            middle = num3;
            largest = num1;
        }
    } else {
        smallest = num3;
        if (num1 <= num2) {
            middle = num1;
            largest = num2;
        } else {
            middle = num2;
            largest = num1;
        }
    }

    // Output the numbers in ascending order
    cout << "The numbers in ascending order are: " 
         << smallest << ", " << middle << ", " << largest << endl;

    return 0;
}
