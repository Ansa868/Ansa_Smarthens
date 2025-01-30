#include<iostream>
using namespace std;

int validNumber(int num1,int num2,int num3)
{
    if((num1>=50) || (num2>=50) || (num3>=50))
   {
     cout<<"One of the value is too large";
   }
}
int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    validNumber(num1,num2,num3);
    return 0;
}