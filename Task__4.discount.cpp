#include <iostream>
using namespace std;

void purchase(){
    int amount;
    string day;
    cout<<"Enter the ammount of purchase: ";
    cin>>amount;
    cout<<"Enter the day of purchase: ";
    cin>>day;

    if(day=="sunday"){
        cout<<"Payable amount: "<<amount*10/100;
    }
    else if(day!="sunday"){
        cout<<"Payable amount: "<<amount;
    }
    
}
int main(){
    purchase();
    return 0;
}