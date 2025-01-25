#include<iostream>
using namespace std;

int totalincome(string s,int rows,int column){
    if(s=="premium"){
    cout<<rows*column*12;
    }
    if(s=="normal"){
        cout<<rows*column*7.5;
    }
    if (s=="discount")
    {
        cout<<rows*column*5;
    }
    


}

int main(){
    int rows,column;
    string s;
    cout<<"Enter the number of rows=";
    cin>>rows;
    cout<<"Enter the number of column=";
    cin>>column;
    cout<<"enter the catagory=";
    cin>>s;
    cout<<"payable"<<totalincome(rows,column,s);
    return 0;
}