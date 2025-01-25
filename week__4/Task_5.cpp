#include <iostream>
using namespace std;

int discout(int amount, string day, string month)
{

    if ((day == "sunday") && (month == "october"))
    {
      return(amount-(amount * 10 / 100));
    }
    if ((day == "sunday") && (month!="october"))
    {
        return( amount-(amount * 5 / 100));
    }
    else
    {
     return(amount);
    }
}

int main()
{
    int price;
    string d, m;
    cout << "Enter the day=";
    cin >> d;
    cout << "Enter the month=";
    cin >> m;
    cout << "Enter the amount=";
    cin >> price;
    cout<<discout(int price, string d, string m);
    return 0;
}