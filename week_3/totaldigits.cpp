#include<iostream>
using namespace std;

void totaldigit(){
    int n;
    cout<<"Enter your number=";
    cin>>n;
    int count=0;

    while(n){
        count++;
        n=n/10;
    }
    cout<<"Total digits="<<count<<endl;
    }

int main(){
    totaldigit();
    return 0;
}