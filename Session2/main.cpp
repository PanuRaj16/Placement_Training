#include <bits/stdc++.h>

using namespace std;

/*int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<2*(n-i)-3;j++)
        {
            cout<<" ";
        }
        if(i!=n-1)
        {
            for(int j=0;j<1;j++)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}*/

/*int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        if(i==0 || i==n-1)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"*";
            }
        }
        else
        {
            cout<<"*";
            for(int j=0;j<n-2;j++)
                cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/

/*void login()
{
    string n, pass;
    cout<<"Enter Username : "<<endl;
    cin >> n;
    cout<<"Enter Password : "<<endl;
    cin >> pass;
    cout<<"Login Successful";
}

void adminLogin()
{
    string n, pass;
    cout<<"Enter Admin Credentials : "<<endl;
    cin >> n;
    cout<<"Enter Password : "<<endl;
    cin >> pass;
    cout<<"Admin Login Successful";
}

void registration()
{
    string n, pass, mail, repass;
    cout<<"Enter Username : "<<endl;
    cin >> n;
    cout<<"Enter mail ID : "<<endl;
    cin >> mail;
    cout<<"Enter Password : "<<endl;
    cin >> pass;
    cout<<"Confirm Password : "<<endl;
    cin >> repass;
    cout<<"Registratin Successful";
}
void logout()
{
    cout<<"Logout Successful";
}

int main()
{
    while(true){
    int n;
    cin >> n;
    switch(n)
    {
        case 1 : cout<<"Request for Registration"<<endl;
                registration();
                break;
        case 2 : cout<<"Request for Login"<<endl;
                login();
                break;
        case 3 : cout<<"Request for Admin Login"<<endl;
                adminLogin();
                break;
        case 4 : cout<<"Request for Logout"<<endl;
                logout();
                break;
        case 5 : exit(0);
        default : cout<<"Invalid Choice"<<endl;
                break;
        }
    }

    return 0;
}*/

class fruit
{
public :
    int apple;
    fruit(int value) : apple(value){
    }
    ~fruit()
    {

    }
};

class Complex{
public :
    int real;
    float img;
    Complex(int r, float l) : real(r),img(l) {}
    cout<<this->real<<endl;
    cout<<this->img<<endl;
    return *this;
};

int main()
{
    fruit d{5};
    cout<<d.apple;
    return 1;
}

class rectangle
{
    int length;
    int breadth;
    Rectangle(int l,int r)
    {
        length = l;
        breadth = r;
    }
    rectangle operator+(rectangle rec)
    {
        this->length = this->length + l.length;
        this->breadth = this->breadth + r.breadth;
        return *this;
    }

};


