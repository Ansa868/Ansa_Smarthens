#include<iostream>
using namespace std;

   string checktitle(int age,string gender){

    if ((age>=16)&&(gender=="m"))
    {
        cout<<"Mr.";
    }
    if((age<=16)&&(gender=="m"))
    {
         cout<<"Master";
    }
    if((age>=16)&&(gender=="f"))
    {
        cout<<"woman";
    }
    if((age<=16)&&(gender=="f"))
    {
        cout<<"girl";
    }
    
   }
int main(){
    int a;
    string g;
    cout<<"Enter your age=";
    cin>>a;
    cout<<"Enter your gender=";
    cin>>g;
    cout<<"your title="<<checktitle(a,g);

}
