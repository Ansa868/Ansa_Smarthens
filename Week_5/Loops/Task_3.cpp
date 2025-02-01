#include<iostream>
using namespace std;

void generateFibonacci(int n);
int main()
{
    int n;
    cout<<"Enter number=";
    cin>>n;
    generateFibonacci(n);
    return 0;
}

void generateFibonacci(int n)
{
    int n1=0,n2=1;
    int next;
    for (int i = 1; i<=n; i++)
    {
        next=n1+n2;
        cout<<n1<<endl;
        n1=n2;
        n2=next;

    }
}