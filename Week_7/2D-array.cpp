#include<iostream>
using namespace std;

int main()
{
    int array1[2][5];
    for (int i = 0; i < 2; i++)
    {
        
        for (int j = 0; j < 5; j++)
        {
            cin>>array1[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<"The value entered at "<<i<<j<<" are=";
            cout<<array1[i][j]<<endl;
        }
        
    }
    
    
    return 0;
}