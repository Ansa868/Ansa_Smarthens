#include<iostream>
using namespace std;

float totalprice(string t,int p);
int main()
{
    string t;
    int p;
    cout<<"Enter vehicle type code=";
    cin>>t;
    cout<<"enter price of vehicle=";
    cin>>p;
    totalprice(t,p);
    return 0;
}
float totalprice(string t,int p)
{
    float tax;
    if (t=="M")
    {
        tax=p*(0.06);
        cout<<"Tax amount="<<tax<<endl;
    }
    else if (t=="E")
    {
        tax=p*(0.08);
        cout<<"Tax amount="<<tax<<endl;
    }
    else if (t=="S")
    {
        tax=p*(0.1);
        cout<<"Tax amount="<<tax<<endl;
    }
    else if (t=="V")
    {
        tax=p*(0.12);
        cout<<"Tax amount="<<tax<<endl;
    }
    else if (t=="T")
    {
        tax=p*(0.15);
        cout<<"Tax amount="<<tax<<endl;
    }

    cout<<"Final price="<<p+tax;
    
}