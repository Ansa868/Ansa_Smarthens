#include <iostream>
using namespace std;

string checkPointPosition(int h, int x, int y);
int main()
{
    int h, x, y;
    cout << "Enter heigh=";
    cin >> h;
    cout << "Enter x coordinate=";
    cin >> x;
    cout << "Enter y coordinate=";
    cin >> y;
    cout << checkPointPosition(h, x, y);
    return 0;
}
string checkPointPosition(int x, int h, int y)
{

    if (((x >= 0 && x <= h * 3) && (y >= 0 && y <= h)) || ((x >= h && x <= h*2) && (y >= h && y <= h * 4)))
    {
        if ((x == 0 && y == 0) || (x == 0 && y == h) || (x == h && y == h) || (x == h && y == h * 4) || (x == h * 2 && y == h * 4) || (x == h * 2 && y == h) || (x == h * 3 && y == h) || (x == h * 3 && y == 0))

        {
            return "Border";
        }
        return "inside";
    }
    else
    {
        return "outside";
    }
}