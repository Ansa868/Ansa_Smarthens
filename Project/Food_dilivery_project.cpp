#include <iostream>
#include <conio.h>

using namespace std;

int totalusers = 0;
string email[100];
string password[100];
string items[100];
int number;

void selections();
void sign_up(string useremail, string userpassword);
bool user_already_exsist(string useremail);
bool signin(string useremail, string userpassword);
void admin_features();
void customer_features();
void add_manu();
void view_manu();
void select_manu();
void rate();

int main()
{
    int choice;
    string email, password;
    string adminname = "admin";
    string adminpassword = "admin1234";

    cout << "WELCOME TO OUR FOOD CORNER\n";
    do
    {
        selections();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Sign up\n";
            cout << "Enter your email=";
            cin >> email;
            cout << "Enter your password=";
            cin >> password;

            if (user_already_exsist(email))
            {
                cout << "User already exsist\n Try again\n";
            }

            else
            {
                sign_up(email, password);
                customer_features();
            }

            break;

        case 2:

            cout << "Sign In\n";
            cout << "Enter your email=";
            cin >> email;
            cout << "Enter your password=";
            cin >> password;
            if (email == adminname && password == adminpassword)
            {
                cout << "Hey admin" << endl;
                admin_features();
            }
            else
            {
                signin(email, password);
                customer_features();
            }

            break;

        case 3:
            cout << "Exit" << endl;
            break;

        default:
            cout << "Invalid! Try again\n";
            break;
        }
        getch();
        system("cls");
    } while (choice != 3);

    return 0;
}

void selections()
{
    cout << " 1.Sign up\n 2.Sign in\n 3.Exit\n";
    cout << "Enter your choice=";
}

void sign_up(string useremail, string userpassword)
{
    email[totalusers] = useremail;
    password[totalusers] = userpassword;
    totalusers++;
}

bool user_already_exsist(string useremail)
{
    for (int i = 0; i < totalusers; i++)
    {
        if (email[i] == useremail)
        {
            return true;
        }
    }
    return false;
}

bool signin(string useremail, string userpassword)
{
    for (int i = 0; i < totalusers; i++)
    {
        if (email[i] == useremail)
        {
            if (password[i] == userpassword)
            {
                cout << "Hello " << useremail << endl;
                return true;
            }
        }
    }
    cout << "Invalid username or password\n";
    return false;
}

// ***************Functionality work ****************//

void add_restaurent_details()
{
    string r;
    cout << "Enter you restaurent name=";
    cin >> r;
}

void add_manu()
{
    // string items[100];

    cout << "Add manu" << endl;
    cout << "How many items do you want to add?" << endl;
    cin >> number;
    cout << "Enter " << number << " items" << endl;
    for (int i = 0; i < number; i++)
    {
        cin >> items[i];
    }
    cout << "Items added successfully" << endl;
}

void view_manu()
{
    if (number == 0)
    {
        cout << "Manu is empty" << endl;
    }

    for (int i = 0; i < number; i++)
    {
        cout << items[i] << endl;
    }
}

void select_manu()
{
    if (number == 0)
    {
        cout << "Manu is empty" << endl;
    }

    for (int i = 0; i < number; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << j << items[i] << endl;
        }
    }
}

void rate()
{
    string ch;
    cout << "Do you want to rate our restaurent?(y/n)" << endl;
    cin >> ch;

    if (ch == "Y" || ch == "y")
    {
        int c;
        cout << "How many stars you will give to our restaurent?" << endl;
        cout << " 1.*\n 2.**\n 3.***\n 4.****\n 5.*****\n";

        do
        {
            cin >> c;
            switch (c)
            {
            case 1:
                cout << "*" << endl;
                break;
            case 2:
                cout << "**" << endl;
                break;
            case 3:
                cout << "***" << endl;
                break;
            case 4:
                cout << "****" << endl;
                break;
            case 5:
                cout << "*****" << endl;
                break;
            default:
                cout << "Invalid! Enter again=";
                break;
            }
        } while (c > 5 || c < 1);
        cout << "Thanks for your feedback!" << endl;
    }
}

void admin_features()
{
    int c;
    cout << "1.Add,update and remove restaurent details" << endl;
    cout << "2.Add,update or remove menu" << endl;
    cout << "3.View history" << endl;
    cout << "4.EXIT" << endl;

    cout << "Enter your choice=";
    do
    {
        cin >> c;

        switch (c)
        {
        case 1:
        //Restaurent details
            break;
        case 2:
            add_manu();
            break;

        case 3:
        //history
            break;

        case 4:
            cout << "EXIT";
            break;

        default:
            printf("Invalid Enter again(1_4)=");
            break;
        }
    } while (c > 4 || c < 1);
}

void customer_features()
{
    int c;
    cout << "1.View Menu" << endl;
    cout << "2.Select items" << endl;
    cout << "3.Rate restaurent" << endl;
    cout << "4.EXIT" << endl;

    cout << "Enter your choice=";
    cin >> c;
    do
    {
        switch (c)
        {
        case 1:
            view_manu();
            break;

        case 2:
           // select_manu();
            break;
        case 3:
            rate();
            break;
        case 4:
            cout << "EXIT (Thanks for visiting)";
            break;

        default:
            printf("Invalid");
            break;
        }
    } while (c > 4 || c < 1);
}
