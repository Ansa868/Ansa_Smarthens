#include<iostream>
using namespace std;

void digitsum(){
    int num,sum=0,r;
   cout<<"Enter Number= ";
   cin>>num; 
   while(num>0){
    r=num%10;
    sum+=num%10;
    num=num/10;
   }
   cout<<"sum= "<<sum<<endl;
}
int main(){
  digitsum();
  return 0;
}