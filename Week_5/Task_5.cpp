#include<iostream>
using namespace std;

int fruitprice(string fruit,string day,int q);
int main(){
    string f,d;
    int q;
    cout<<"Enter the name of fruit=";
    cin>>f;
    cout<<"Enter the day of week=";
    cin>>d;
    cout<<"Enter the quantity=";
    cin>>q;
    fruitprice(f,d,q);
    return 0;
}

int fruitprice(string fruit,string day,int q){
    if ((fruit=="banana") && ((day=="manday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")))
    {
        cout<<q*2.5;
    }
    else if ((fruit=="apple") && ((day=="manday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")))
    {
        cout<<q*1.2;
    }
    else if ((fruit=="orange") && ((day=="manday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")))
    {
        cout<<q*0.85;
    }
    else if ((fruit=="grapefruit") && ((day=="manday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")))
    {
        cout<<q*1.45;
    }
    else if ((fruit=="kiwi") && ((day=="manday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")))
    {
        cout<<q*2.7;
    }
    else if ((fruit=="pineapple") && ((day=="manday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")))
    {
        cout<<q*5.50;
    }
    else if ((fruit=="grapes") && ((day=="manday")||(day=="tuesday")||(day=="wednesday")||(day=="thursday")||(day=="friday")))
    {
        cout<<q*3.85;
    }

    else if((fruit=="banana")&&((day=="saturday")||(day=="sunday")))
    {
        cout<<q*2.7;
    }
    else if((fruit=="apple")&&((day=="saturday")||(day=="sunday")))
    {
        cout<<q*1.25;
    }
    else if((fruit=="orange")&&((day=="saturday")||(day=="sunday")))
    {
        cout<<q*0.9;
    }
    else if((fruit=="grapefruit")&&((day=="saturday")||(day=="sunday")))
    {
        cout<<q*1.6;
    }
    else if((fruit=="kiwi")&&((day=="saturday")||(day=="sunday")))
    {
        cout<<q*3;
    }
    else if((fruit=="pineapple")&&((day=="saturday")||(day=="sunday")))
    {
        cout<<q*5.6;
    }
    else if((fruit=="grape")&&((day=="saturday")||(day=="sunday")))
    {
        cout<<q*4.2;
    }
    else
    cout<<"Error";

}