#include <iostream>
using namespace std;

int cellularcompany(string sc, int m, string t);
int main()
{
    string sc, t;
    int m;
    cout << "Enter the service code=";
    cin >> sc;
    cout << "Enter the number of minutes used=";
    cin >> m;
    cellularcompany(sc, m, t);
    return 0;
}

int cellularcompany(string sc, int m, string t)
{
    if ((sc == "R") || (sc == "r"))
    {
        if (m <= 50)
        {
            cout << "Service type:" << "Regular" << endl;
            cout <<"Total minutes used="<<m << endl;
            cout << "Amount due=" << "10$";
        }
        if (m > 50)
        {
            cout << "Service type:" << "Regular" << endl;
            cout <<"Total minutes used="<< m << endl;
            cout << "Amount due=" << 10+(m*0.20);
        }
    }

    else if ((sc == "P") || (sc == "p"))
    {
        cout << "Enter the time of call=";
        cin >> t;
        if (m <= 75 && ((t == "D") || (t == "d")))
        {
            cout << "Service type:" << "Premium" << endl;
            cout <<"Total minutes used="<< m << endl;
            cout << "Amount due=" << "$25";
        }
        else if (m > 75 && ((t == "D") || (t == "d")))
        {
            cout << "Service type:" << "Premium" << endl;
            cout <<"Total minutes used="<< m << endl;
            cout << "Amount due=" << 25 + (10 * m);
        }
        else if (m <= 100 && ((t == "N") || (t == "n")))
        {
            cout << "Service type:" << "Premium" << endl;
            cout <<"Total minutes used="<< m << endl;
            cout << "Amount due=" << "$25";
        }
        else if (m > 100 && ((t == "N") || (t == "n")))
        {
            cout << "Service type:" << "Premium" << endl;
            cout <<"Total minutes used="<< m << endl;
            cout << "Amount due=" << 25 + (0.05 * m);
        }
    }
}