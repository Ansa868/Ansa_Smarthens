#include<iostream>
using namespace std;

void largest(){
    int i;
    int largest=INT_MIN;
    while(i!=-1){
    cout<<"Enter the number= ";
    cin>>i;
    if(i>largest)
    largest=i;
    }

    cout<<"The largest number entered is "<<largest;
}

int main(){
    largest();
    return 0;
}