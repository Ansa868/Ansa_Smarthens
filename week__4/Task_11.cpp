#include <iostream>
using namespace std;

int speed(int s)
{
    if (s <= 10)
    {
        cout<<"slow";
    }
    if ((s > 10) && (s <= 50))
    {
        cout << "average";
    }
    if ((s > 50) && (s <= 150))
    {
        cout << "fast";
        return 0;
    }
    if ((s > 150) && (s <= 1000))
    {
        cout << "ultra fast";
        return 0;
    }
    if (s > 1000)
    {
        cout << "extreamly fast";
        return 0;
    }
}

int main()
{
    int s;
    cout << "Enter the speed=";
    cin >> s;
    cout << speed(s);
    return 0;
}