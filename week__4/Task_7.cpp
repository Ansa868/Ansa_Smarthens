#include <iostream>
using namespace std;

int discount(string day, string month,int amount){
    if (((month=="october")||(month=="march")||(month=="august")) && (day=="sunday"))
    {
        return(amount-(amount*10/100));
    }
    else
        return(amount);
    
    
}

int main()
{
    int p;
    string d, m;
    cout << "Enter the day=";
    cin >> d;
    cout << "Enter the month=";
    cin >> m;
    cout << "Enter the price=";
    cin >> p;
    cout<<"Payable amount="<<discount(d,m,p);
    return 0;
}