#include<iostream>
using namespace std;

int comparison(int num1,int num2,int num3){
    if (num1==num2==num3)
    {
       cout<<"Yes";
    }
    if ((num1!=num2) || (num2!=num3) || (num3!=num2))
    {
        cout<<"No";
    }
    ;
    
}
int main(){
    int no1,no2,no3;
    cout<<"Enter first number=";
    cin>>no1;
    cout<<"Enter second number=";
    cin>>no2;
    cout<<"Enter third number=";
    cin>>no3;
    cout<<comparison(no1,no2,no3);
    return 0;
}