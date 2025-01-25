#include<iostream>
using namespace std;

void parameter(){
    int value;
    cout<<"enter the value= ";
    cin>>value;
    
    string choice,s,t,h,c;
    cin>>choice;
    if(choice==s)
    {
        cout<<value*4;
    }

    if(choice==t)
    {
        cout<<value*3;
    }

    if(choice==h){
        cout<<value*6;
    }
    if(choice==c){
     cout<<6.28*value;
    }
}

int main(){
    parameter();
    return 0;
}