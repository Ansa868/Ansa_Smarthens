#include<iostream>
using namespace std;

void printTable(int num);
int main(){
    int num;
    cout<<"Enter the number=";
    cin>>num;
    printTable(num);
    return 0;
}

void printTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
    
}