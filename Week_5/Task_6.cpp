#include <iostream>
using namespace std;
string calculateHotelPrice(string month, int n);
int main()
{
    string m;
    int n;
    cout << "Enter the Month=";
    cin >> m;
    cout << "Enter the number of stay=";
    cin >> n;
    calculateHotelPrice(m, n);
    return 0;
}

string calculateHotelPrice(string month, int n)
{

    if ((month == "may") || (month == "october"))
    {
        cout << "for studio=" << 50 * n<<endl;
        cout << "for apartment=" << 65 * n<<endl;
        if (n > 7)
        {
            cout << "discout on studio=" << (50 * n) * 5 / 100<<endl;
        }
        if (n>14)
        {
            cout<<"Discout on apartment="<<(65 * n)*0.1;
        }
        
    }
    else if ((month == "june") || (month == "september"))
    {
        cout << "for studio=" << 75.2 * n<<endl;
        cout << "for apartment=" << 68.7 * n<<endl;
        if (n > 14)
        {
            cout << "discout on studio=" << (75.2 * n) * 0.2<<endl;
        }

        if (n>14)
        {
            cout<<"Discout on apartment="<<(65 * n)*0.1;
        }
    }
    else if ((month == "may") || (month == "october"))
    {
        cout << "for studio=" << 76 * n<<endl;
        cout << "for apartment=" << 77 *n<<endl;
        if (n > 14)
        {
            cout << "discout on studio=" << (76 * n) * 0.3<<endl;
        }
        if (n>14)
        {
            cout<<"Discout on apartment="<<(65 * n)*0.1;
        }
    }
}