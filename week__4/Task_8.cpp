#include <iostream>
using namespace std;

int discount(string day, string month, int price)
{
    if (((month=="october")||(month=="march")||(month=="august"))&&(day=="sunday"))
    {
        return(price-(price*10/100));
    }
    if (((month=="november")||(month=="december"))&&(day=="monday"))
    {
        return(price-(price*5/100));
    }
    else
     return(price);
    
}

int main()
{
    int a;
    string d, m;
    cout << "Enter the day=";
    cin >> d;
    cout << "Enter the month=";
    cin >> m;
    cout << "Enter the amount=";
    cin >> a;
    cout<<"Amount to be paid="<<discount(d,m,a);
    return 0;
}