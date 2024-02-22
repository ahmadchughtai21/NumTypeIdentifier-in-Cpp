#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a Number : ";
    float num;
    cin >> num;
    if (num < 0)
    {
        cout << "The entered number is NEGATIVE!";
        return 1;
    }
    else if (num > 0)
    {
        cout << "The entered number is POSITIVE!";
        return 1;
    }
    else if (num == 0)
    {
        cout << "The entered number niether positive nor negative!";
        return 1;
    }
    else
    {
        cout << "Enter a valid number!";
        return 1;
    }

    return 0;
}