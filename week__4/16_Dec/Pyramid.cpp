#include<iostream>
using namespace std;

float pyramid(int l,int h,int w,string u);
int main()
{
    int l,h,w;
    string u;
    cout<<"Enter the lenght=";
    cin>>l;
    cout<<"Enter the height=";
    cin>>h;
    cout<<"Enter the width=";
    cin>>w;
    cout<<"Enter the unit=";
    cin>>u;
    pyramid(l,h,w,u);
    return 0;
}
float pyramid(int l,int h,int w,string u)
{
    int mul;
    mul=(l*h*w)/3;
   
    if (u=="m")
    {
        cout<<mul<<"m";
    }
    else if (u=="km")
    {
        cout<<mul*0.000000001<<"km";
    }
    else if (u=="cm")
    {
        cout<<mul*1000000<<"cm";
    }
    else if (u=="mm")
    {
        cout<<mul*1000000000<<"mm";
    }
    
    
    
    

}