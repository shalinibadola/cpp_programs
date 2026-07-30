// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string name;
//     int units;
//     float bill;
//     cout<<"enter the name of the customer:";
//     cin>>name;
//     cout<<"enter the units used by the customer:";
//     cin>>units;
//     if(units<=100)
//     {
//         bill=units*0.60;

//     }
//     else if(units<=300)
//     {
//         bill=(units*0.60)+(units-100)*0.80;
//     }
//     else{
//         bill=(units*0.60)+(units*0.80)+(units-300)*0.90;
//     }
//     bill=bill+50;
//     if(bill>300)
//     {
//         bill=bill+bill*0.15;
//     }
//     cout<<"the total units consumed by the user is\n"<<name<<" "<<units<<" "<<bill;
//     return 0;
// }

#include<iostream>
#include<string.h>
using namespace std;
class bill
{
    private:
    string name;
    int units;
    float amount;
    public:
    void input()
    {
    cout<<"enter the name of the customer:";
    cin>>name;
    cout<<"enter the units used by the customer:";
    cin>>units;
    }
    void calculate()
    {
        if(units<=100)
        {
            amount=units*0.60;
        }
        else if(units<=300)
        {
            amount=(units*0.60)+(units-100)*0.80;
        }
        else
        {
            amount=(units*0.60)+(units*0.80)+(units-300)*0.90;
        }
        amount=amount+50;
        if(amount>300)
        {
            amount=amount+amount*0.15;
        }
    }
    void display()
    {
        cout<<"user="<<name<<"\n"<<"units used="<<units<<"\n"<<"amount="<<amount;
    }
};
int main()
{
    bill b;
    b.input();
    b.calculate();
    b.display();
    return 0;
}