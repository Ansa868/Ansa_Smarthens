#include<iostream>
using namespace std;

int compareAge(int a1,int a2,int a3,string n1,string n2,string n3);
int main(){
    string n1,n2,n3;
    int a1,a2,a3;
    cout<<"Name 1=";
    cin>>n1;
    cout<<"Enter his age=";
    cin>>a1;
    cout<<"Name 2=";
    cin>>n2;
    cout<<"Enter his age=";
    cin>>a2;
    cout<<"Name 3=";
    cin>>n3;
    cout<<"Enter his age=";
    cin>>a3;
    cout<<compareAge(a1,a2,a3,n1,n2,n3);
    return 0;
}

int compareAge(int a1,int a2,int a3,string n1,string n2,string n3)
{
    if ((a1<a2) && (a1<a3))
    {
        cout<<"Name of the yougest brother"<<n1;
    }
    else if ((a2<a1)&&(a2<a3))
    {
        cout<<"Name of the yougest brother"<<n2;
    }
    else if ((a3<a1)&&(a3<a2))
    {
        cout<<"Name of the yougest brother="<<n3<<endl;
    }
    
}