#include<iostream>
using namespace std;

void printTable(){
    int i;
    int num=0;
    cout<<"Enter Number= ";
    cin>>num;
    for(i=1;i<=10;i++){
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
}

int main(){
    printTable();
     return 0;
    }
