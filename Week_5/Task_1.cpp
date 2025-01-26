#include<iostream>
using namespace std;

string decideactivity(string temp,string hum){
    if (temp=="warm"&& hum=="dry")
    {
       return "Play tennis";
    }
    else if (temp=="warm"&& hum=="humid")
    {
        return "swim";
    }
    else if (temp=="cold"&&hum=="dry")
    {
        return "play basketball";
    }
    else if (temp=="cold"&& hum=="humid")
    {
         return "watch tv";
    }
    
    
}
int main(){
    string t,h;
    cout<<"Enter the temperature=";
    cin>>t;
    cout<<"Enter the humidity=";
    cin>>h;
    cout<<decideactivity(t,h);
    return 0;
}