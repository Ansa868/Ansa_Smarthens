#include <iostream>
using namespace std;
void greet();
void addition();
void subtraction();
void multiplication();

int main(){
    greet();
    subtraction();
    return 0;
}
void addition(){
    int no1, no2;
    cout<<"Number 1: ";
    cin>>no1;
    cout<<"Number 2:";
    cin>>no2;
    cout<<"Answer= "<<no1+no2;
}

void subtraction()
{
    int no1,no2;
    cout<<"1st no.= ";
    cin>>no1;
    cout<<"2nd no.= ";
    cin>>no2;
    cout<<"Answer= "<<no1-no2;
}

 void multiplication()
{
    int no1,no2;
    cout<<"number 1= ";
    cin>>no1;
    cout<<"number 2= ";
    cin>>no2;
    cout<<"Answer= "<<no1*no2;

}

void division()
{
    int no1,no2;
    cout<<"number 1=";
    cin>>no1;
    cout<<"number 2=";
    cin>>no2;
    cout<<"answer is "<<no1/no2;
}
void greet()
{
    string name;
    cout<<"write your name: ";
    cin>>name;
    cout<<"Hey "+name<<endl;
}