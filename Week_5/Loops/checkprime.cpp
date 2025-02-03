#include<iostream>
using namespace std;

string checkprime(int n);
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    checkprime(n);
}

string checkprime(int n)
{
    for (int i =2 ; i<=n ; i++)
    {
        if (n%i==0)
        {
           cout<<"Not prime"<<endl;
           break;
        }
        else if (n%i != 0)
        {
            cout<<"prime"<<endl;
            break;
        }
        
    }
    
}