#include <iostream>
using namespace std;

string checkstudentstatus(int esh, int esm, int sh, int sm);
int main()
{
    int esh, esm, sh, sm;
    cout << "Enter exam starting time(hours 1_23)=";
    cin >> esh;
    cout << "Enter exam starting time(minutes 0__59)=";
    cin >> esm;
    cout << "Enter student hour of arrival=";
    cin >> sh;
    cout << "Enter student minutes of arrival=";
    cin >> sm;
    cout << checkstudentstatus(esh, esm, sh, sm);
    return 0;
}

string checkstudentstatus(int esh, int esm, int sh, int sm)
{
    if ((sh == esh) && (sm == esm))
    {
        cout << "On time" << endl;
        cout << esh - sh << ":" << esm - sm << "On time";
    }

    else if (((sh > esh) && (sm == esm)) || ((sh == esh) && (sm > esm)))
    {
        cout<<"Late"<<endl;
        cout<<sh-esh<<":"<<sm-esm<<"Late after the exam started";
    }

    else if ((sh < esh) || (sh == esh))
    {

        if (sm <= 30)
        {
            cout << (esh - sh) << ":" <<(sm - esm) << "On time";
        }

        else if (sm > 30)
        {
            cout << "Early" << endl;
            cout << esh - sh << ":" << -1 * (sm - esm) << "Early before the arrival";
        }
    }
}
