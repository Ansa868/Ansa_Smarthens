#include <iostream>
using namespace std;

int discount(string day,string month,int amount)
{
    
    if (day == "sunday" || month == "october")
    {
        return(amount - (amount * 10 / 100));
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
    cout << "Ener the day=";
    cin >> d;
    cout << "Enter the month=";
    cin >> m;
    cout << "Enter the amount=";
    cin >> price;
    cout<<"payable amount="<<discount(d,m,price);
    return 0;
}