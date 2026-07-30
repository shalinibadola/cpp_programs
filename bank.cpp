#include<iostream>
#include<string>
using namespace std;
class bank
{
    private:
    string name;
    int AccNo;
    string type;
    float bal;
    public:
    void input()
    {
        cout<<"enter the name of the account holder:";
        cin>>name;
        cout<<"enter the account number:";
        cin>>AccNo;
        cout<<"enter the type of account:";
        cin>>type;
        cout<<"enter the balance in the account:";
        cin>>bal;
    }
    void deposit()
    {
        float  amt;
        cout<<"enter the amount to be deposited:";
        cin>>amt;
        bal=bal+amt;
    }
    void withdraw()
    {
        float amt;
        cout<<"enter the amount to withdraw:";
        cin>>amt;
        if(amt<=bal)
        {
            bal=bal-amt;
        }
        else
        {
            cout<<"insufficient balance";
        }
    }
    void display()
    {
        cout<<"the name of the  account holder is="<<name<<endl;
        cout<<"the account no of the account holder is="<<AccNo<<endl;
        cout<<"the type of the account is="<<type<<endl;
        cout<<"the balance in the account is="<<bal<<endl;
    }
};
int main()
{
    bank b;
    b.input();
    b.deposit();
    b.withdraw();
    b.display();
    return 0;
}