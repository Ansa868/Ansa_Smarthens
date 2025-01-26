#include<iostream>
using namespace std;

string findZodoicSign(int date,string month);

int main(){
    int d;
    string m;
    cout<<"Enter the date=";
    cin>>d;
    cout<<"Enter the month=";
    cin>>m;
    findZodoicSign(d,m);

    return 0;
}
string findZodoicSign(int date,string month){
    if (((date>=21)&&(month=="march")) || ((date<=19)&&(month=="april")))
    {
        return"Aries";
    }

    else if (((date>=20)&&(month=="april")) || ((date<=20)&&(month=="may")))
    {
        return"Taurus";
    }
    else if (((date>=21)&&(month=="may"))||((date<=20)&&(month=="june")))
    {
        return "Gemini";
    }
    else if (((date>=21)&&(month=="june"))||((date<=22)&&(month=="july")))
    {
        return "cancer";
    }
    else if (((date>=23)&&(month=="july"))||((date<=22)&&(month=="august")))
    {
        return "leo";
    }
    else if (((date>=23)&&(month=="august"))||((date<=22)&&(month=="september")))
    {
        return "virgo";
    }
    else if (((date>=23)&&(month=="september"))||((date<=22)&&(month=="october")))
    {
        return "libra";
    }
    else if (((date>=23)&&(month=="october"))||((date<=21)&&(month=="november")))
    {
        return "scorpio";
    }
    else if (((date>=22)&&(month=="november"))||((date<=21)&&(month=="december")))
    {
        return "sagittarius";
    }
    else if (((date>=22)&&(month=="december"))||((date<=22)&&(month=="january")))
    {
        return "capricon";
    }

    
    
    
    
}