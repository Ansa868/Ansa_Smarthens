#include <iostream>
using namespace std;

string findZodoicSign(int date, string month);

int main()
{
    int date;
    string month;
    cout << "Enter the date=";
    cin >> date;
    cout << "Enter the month=";
    cin >> month;
    findZodoicSign(date, month);

    return 0;
}
string findZodoicSign(int date, string month)
{
    if (((date >= 21) && (month == "march")) || ((date <= 19) && (month == "april")))
    {
        cout << "Aries";
    }

    else if (((date >= 20) && (month == "april")) || ((date <= 20) && (month == "may")))
    {
        cout << "Taurus";
    }
    else if (((date >= 21) && (month == "may")) || ((date <= 20) && (month == "june")))
    {
        cout << "Gemini";
    }
    else if (((date >= 21) && (month == "june")) || ((date <= 22) && (month == "july")))
    {
        cout << "cancer";
    }
    else if (((date >= 23) && (month == "july")) || ((date <= 22) && (month == "august")))
    {
        cout << "leo";
    }
    else if (((date >= 23) && (month == "august")) || ((date <= 22) && (month == "september")))
    {
        cout << "virgo";
    }
    else if (((date >= 23) && (month == "september")) || ((date <= 22) && (month == "october")))
    {
        cout << "libra";
    }
    else if (((date >= 23) && (month == "october")) || ((date <= 21) && (month == "november")))
    {
        cout << "scorpio";
    }
    else if (((date >= 22) && (month == "november")) || ((date <= 21) && (month == "december")))
    {
        cout << "sagittarius";
    }
    else if (((date >= 22) && (month == "december")) || ((date <= 22) && (month == "january")))
    {
        cout << "capricon";
    }
}