#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int i,j;
    cout<<"enter the string:";
    getline(cin,str);
    for(i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            continue;
        }
        int c=0;
        for(j=0;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            cout<<"the non repeating character is:"<<str[i];
        }
        return 0;
    }   
}
