#include <iostream>
using namespace std;

float calculateaverage(float english, float math, float chemistry, float socialscience, float biology)
{
    cout << "Total sum=" << english + math + chemistry + socialscience + biology<<endl;
    cout<<"Percentage="<<((english + math + chemistry + socialscience + biology)/500)*100;
    cout<<"Grade="<<grade(per);
}

string grade(float per){
    if ((per>=90) && (per<=100))
    {
        return "A+";
    }
    else if ((per>=80)&&(per<=90))
    {
        return "A";
    }
    else if((per>=70)&&(per<=80))
    {
        return "B+";
    }
    else if ((per>=60)&&(per<=70))
    {
        return "B";
    }
    else if ((per>=50)&&(per<=60))
    {
        return "C";
    }
    else if ((per>=40)&&(per<=50))
    {
        return "D";
    }
    else if (per<40)
    {
        return "F";
    }
    
}

int main()
{
    int eng, math, chem, sscience, bio;
    cout << "Enter english marks=";
    cin >> eng;
    cout << "Enter maths marks=";
    cin >> math;
    cout << "Enter chemistry marks=";
    cin >> chem;
    cout << "Enter social science marks=";
    cin >> sscience;
    cout << "Enter biology marks=";
    cin >> bio;
    calculateaverage(eng, math, chem, sscience, bio);

    return 0;
}