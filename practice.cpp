//Practice exercise

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number: " << endl;
    cin >> num;
    cout << endl;

    if (num > 5)
     {
        cout << num;
        num = 0;
     }
    else
     {

        cout << "Num is zero" << endl;
     }
    return 0;


}