#include<iostream>
using namespace std;

void comparison();
int main(){
    comparison();
    return 0;
}


   void comparison(){
    int no1,no2;
    cout<<"enter the first number= ";
    cin>>no1;
    cout<<"enter the second number= ";
    cin>>no2;
    if (no1>no2)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
   }
    
