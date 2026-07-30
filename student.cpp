#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    int score[5];
    public:
    void input()
    {
        cout<<"enter the marks:";
        for(int i=0;i<5;i++)
        {
            cin>>score[i];
        }
    }
    int calculateTotalScore()
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum=sum+score[i];
        }
        return sum;
    }
};
int main()
{
    int n;
    cout<<"enter the no of students in anna's class:";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        s[i].input();
    }
    int anna=s[0].calculateTotalScore();
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i].calculateTotalScore()>anna)
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}

