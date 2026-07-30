// #include<iostream>
// #include<string>
// using namespace std;
// class Hotel
// {
//     private:
//     int Rno,NOD;
//     string name;
//     float tarrif;
//     public:
//     float CALC()          //in this calc is called in main and iswritten in public but if we write it in private the we will have to call it in inside the class as private members are not accessible outside the class
//     {
//         float amt=NOD*tarrif;
//         if(amt>1000)
//         {
//             amt=amt*1.05;
//         }
//         return amt;
//     }
//     void Checkin()
//     {
//         cout<<"enter the room number:";
//         cin>>Rno;
//         cout<<"enter the name of the customer:";
//         cin>>name;
//         cout<<"enter the per day charges:";
//         cin>>tarrif;
//         cout<<"enter the number of days stay:";
//         cin>>NOD;
//     }
//     void Checkout()
//     {
//         cout<<"customer name="<<name<<endl;
//         cout<<"\nroom number="<<Rno<<endl;
//         cout<<"\ntarrif is="<<tarrif;
//         cout<<"\nNOD is="<<NOD<<endl;
//         cout<<"\namount is="<<CALC()<<endl;
//     }
// };
// int main()
// {
//     Hotel h;
//     h.CALC();
//     h.Checkin();
//     h.Checkout();
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
class Hotel
{
    private:
    int Rno,NOD;
    string name;
    float tarrif;
    float CALC()
    {
        float amt=NOD*tarrif;
        if(amt>10000)
        {
            amt=amt*1.05;
        }
        return amt;
    }
    public:
    void Checkin()
    {
        cout<<"enter the name of the customer:";
        cin>>name;
        cout<<"enter the room number:";
        cin>>Rno;
        cout<<"enter the per day charges:";
        cin>>tarrif;
        cout<<"enter the number of days stayed:";
        cin>>NOD;
    }
    void Checkout()
    {
        cout<<"the name of the customer is="<<name<<endl;
        cout<<"room number is="<<Rno<<endl;
        cout<<"per day charges are="<<tarrif<<endl;
        cout<<"no of days stayed is="<<NOD<<endl;
        cout<<"the total amount charged is="<<CALC()<<endl;
    }
};
int main()
{
    Hotel h;
    h.Checkin();
    h.Checkout();
    return 0;
}