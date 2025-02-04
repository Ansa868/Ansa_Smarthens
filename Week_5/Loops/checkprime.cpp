#include<iostream>
using namespace std;

int checkprime(int n);
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    checkprime(n);
}

int checkprime(int n)
{
    int i;
    for (i =2 ; i<n ; i++)
    {
        if (n%i==0)
        {
           break;
        }
    }
    if (i==n)
    {
        cout<<"It is a prime number";
    }
    else if (i!=n)
    {
        cout<<"It is not a prime number";
    }
    
    
    
}