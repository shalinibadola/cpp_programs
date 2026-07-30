#include<iostream>
using namespace std;
class student{
    private:
    int id;
    string name;
    public:
    void setDetails(int x, string y)
    {
        cout<<"enter the id of the student:";
        cin>>id;
        id=x;
        cout<<"enter the name of the student:";
        cin>>name;
        name=y;
    }
    void show()
    {
        cout<<"student name="<<name<<endl;
        cout<<"student id="<<id<<endl;
    }
};
int main()
{
   
    int x;
    string y;
     student s1,s2;
    s1.setDetails(x,"y");
    s1.show();
    s2.setDetails(x,"y");
    s2.show();
    return 0;
}