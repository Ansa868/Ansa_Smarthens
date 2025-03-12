#include<iostream>
#include<conio.h>

using namespace std;

int totalusers=0;
string email[100];
string password[100];

void selections();
void sign_up(string useremail,string userpassword);
bool user_already_exsist(string useremail);
bool signin(string useremail,string userpassword);
void admin_features();
void customer_features();

int main()
{
    int choice;
    string email,password;
    string adminname="admin";
    string adminpassword="admin1234";

    cout<<"WELCOME TO OUR FOOD CORNER\n";
    do
    {
        selections();
        cin>>choice;
        
        switch (choice)
    {
        case 1:
        cout<<"Sign up\n";
        cout<<"Enter your email=";
        cin>>email;
        cout<<"Enter your password=";
        cin>>password;
        
        if (user_already_exsist(email))
        {
            cout<<"User already exsist\n Try again\n";
        }
        
        else{
            sign_up(email,password);
        }
        
        break;
        
        case 2:

        cout<<"Sign In\n";
        cout<<"Enter your email=";
        cin>>email;
        cout<<"Enter your password=";
        cin>>password;
        if (email==adminname && password==adminpassword)
        {
            cout<<"Hey admin"<<endl;
            admin_features();
        }
        else{
        signin(email,password);}
        customer_features();
        break;
        
        case 3:
        cout<<"Exit"<<endl;
        break;

        default:
        cout<<"Invalid! Try again\n";
        break;
    }
    getch();
    system("cls");
} 
while (choice!=3);

    return 0;
}

void selections()
{
    cout<<"1.Sign up\n 2.Sign in\n  3.Exit\n";
    cout<<"Enter your choice=";
}

void sign_up(string useremail,string userpassword)
{
    email[totalusers]=useremail;
    password[totalusers]=userpassword;
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

bool signin(string useremail,string userpassword)
{
    for (int i = 0; i < totalusers; i++)
    {
        if (email[i]==useremail)
        {
           if(password[i]==userpassword)
           {
              cout<<"Hello "<<useremail<<endl;
              return true;
           }
        }
    }
    cout<<"Invalid username or password\n";
    return false;
    
}

void admin_features()
{
    cout<<"1.Add,update and remove restaurent details"<<endl;
    cout<<"2.Add,update or remove menu"<<endl;
    cout<<"3.VIew history<<endl";
}

void customer_features()
{
    cout<<"1.View Menu"<<endl;
    cout<<"2.Select items"<<endl;
    cout<<"3.Rate restaurent"<<endl;
}
