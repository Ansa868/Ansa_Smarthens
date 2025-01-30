#include <iostream>
using namespace std;

int compareValues(int num1, int num2, int num3);
int main()
{
    int num1, num2, num3;
    cout << "Enter 1st number=";
    cin >> num1;
    cout << "Enter 2nd number=";
    cin >> num2;
    cout << "Enter 3rd number=";
    cin >> num3;
    cout << compareValues(num1, num2, num3);
    return 0;
}

int compareValues(int num1, int num2, int num3)
{
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            return num1;
        }
        else
        {
            return num3;
        }
    }

    else if (num2 > num3)
    {
        if (num2 > num1)
        {
            return num2;
        }
        else
        {
            return num1;
        }
    }
    else if (num3 > num1)
    {
        if (num3 > num2)
        {
            return num3;
        }
        else
        {
            return num2;
        }
    }
}
