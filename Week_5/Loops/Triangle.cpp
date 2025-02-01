#include<iostream>
using namespace std;

int numberOftriangle(int n);
int main()
{
    int n;
    cout<<"Enter number of triangles=";
    cin>>n;
    numberOftriangle(n);
}

int numberOftriangle(int n)
{
    for (int i = 1; i <=n; i++)
    {
        for (int j = 2; j<=n; j++)
        {
            i;
            i=i+j;
        }
        
      cout<<i;
    }
}