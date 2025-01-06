#include<iostream>
using namespace std;
void evensum(){
int start,end;
    cout<<"Enter the start of the range= ";
    cin>>start;
    cout<<"Enter the end of the range= ";
    cin>>end;
    
    
    int i,sum=0;
    for(i=start;i<=end;i++){
     if(i%2==0)
     cout<<i<<endl;
     sum=sum+i;
    }
    cout<<"The sum of all even no.="<<sum;
    }
int main(){
    evensum();
    return 0;
}