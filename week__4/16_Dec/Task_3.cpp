#include<iostream>
using namespace std;

float percentage(int eng,int math,int urdu,int bio,int ssci);
int main()
{
    int eng,math,urdu,bio,ssci;
    cout<<"Enter marks of english=";
    cin>>eng;
    cout<<"Enter marks of math=";
    cin>>math;
    cout<<"Enter marks of urdu=";
    cin>>urdu;
    cout<<"Enter marks of biology=";
    cin>>bio;
    cout<<"Enter marks of social science=";
    cin>>ssci;
    cout<<percentage(eng,math,urdu,bio,ssci)<<endl;
    return 0;
}

float percentage(int eng,int math,int urdu,int bio,int ssci)
{
    float per;
    int total;
    total=eng+math+urdu+bio+ssci;
    cout<<"Total="<<total<<endl;
    
    per=(total*100)/500;
    cout<<"Percentage="<<per;

    if ((per >= 90) && (per <= 100))
    {
        cout << "A+";
    }
    else if ((per >= 80) && (per <= 90))
    {
        cout << "A";
    }
    else if ((per >= 70) && (per <= 80))
    {
        cout << "B+";
    }
    else if ((per >= 60) && (per <= 70))
    {
        cout << "B";
    }
    else if ((per >= 50) && (per <= 60))
    {
        cout << "C";
    }
    else if ((per >= 40) && (per <= 50))
    {
        cout << "D";
    }
    
    else 
    {
        per<40;
        cout << "F";
    }
}

