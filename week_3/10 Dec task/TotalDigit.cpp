#include<iostream>
using namespace std;

int TotalDigits(int num);
int main(){
    int num;
    cout<<"Enter the number=";
    cin>>num;
    TotalDigits(num);
    return 0;
}
int TotalDigits(int num)
{
    int count=0;
    if (num==0)
    {
        cout<<"Total number of digit="<<"1";
    }
    
    else 
    {
    while (num!=0)
    {
       num=num/10;
       count++;
    }
    cout<<"Total number of digit="<<count;}
}