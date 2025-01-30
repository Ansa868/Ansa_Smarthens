#include<iostream>
using namespace std;

string province(string p)
{
   if ((p!="sindh") || (p!="Sindh"))
   {
    return "You should come visit sindh sometime!";
   }
   
}
int main()
{
    string p;
    cout<<"Which province do you live? ";
    cin>>p;
    cout<<province(p);
    return 0;
}