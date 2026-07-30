//using array
#include<iostream>
using namespace std;
int main()
{
    char arr[50];
    char ch;
    int i;
    cout<<"enter an array";
    cin.getline(arr,50);
    cout<<"enter the element to be deleted";
    cin>>ch;
    for(i=0;i<50;i++)
    {
        if(arr[i]==ch)
        {
            arr[i]=arr[i+1];
        }
        else
        {
            cout<<arr[i];
        }
    }
    return 0;
}

//using string
#include<iostream>
using namespace std;
int main()
{
    char str[50];
    char ch;
    int i;
    cout<<"enter the string";
    cin.getline(str,50);
    cout<<"enter the element to be deleted";
    cin>>ch;
    for(i=0;i<50;i++)
    {
        if(str[i]==ch)
        {
            for(i=0;str[i]!='\0';i++)
            {
                str[i]=str[i+1];
            }
        }
    }
    for(i=0;str[i]!='\0';i++)
    {
        cout<<str[i];
    }
    return 0;
}
