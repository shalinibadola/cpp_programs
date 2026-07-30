// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i,j;
//     cout<<"enter the size of the array:";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements of the array:";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int max_sum=-1000000;
//     for(i=0;i<n;i++)
//     {
//     int sum=0;
//     int pos=i;
//     int size=1;
//     while(pos+size<=n)
//     {
//         for(j=pos;j<pos+size;j++)
//         {
//             sum=sum+arr[j];
//         }
//         pos=pos+size;
//         size++;
//     }
//     if(sum>max_sum)
//     {
//         max_sum=sum;
//     }
//     }
//     cout<<max_sum;
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i,j;
//     cout<<"enter the size of the array:";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements of the array:";
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int max_size=-1000000;
//     for(i=0;i<n;i++)
//     {
//         int sum=0;
//         int pos=i;
//         int size=1;
//         while(pos+size<=n)
//         {
//             for(j=pos;j<pos+size;j++)
//             {
//                 sum=sum+arr[j];
//             }
//             pos=pos+size;
//             size++;
//         }
//         if(sum>max_size)
//         {
//             max_size=sum;
//         }
//     }
//     cout<<max_size;
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max_sum=-1000000;
    int best_index=0;
    int best_element=arr[0];
    for(i=0;i<n;i++)
    {
        int sum=0;
        int pos=i;
        int size=1;
        while(pos+size<=n)
        {
            for(j=pos;j<pos+size;j++)
            {
                sum=sum+arr[j];
            }
            pos=pos+size;
            size++;
        }
        if(sum>max_sum)
        {
            max_sum=sum;
            best_index=i;
            best_element=arr[i];
        }
    }
    cout<<"maximum sum is="<<max_sum<<endl;
    cout<<"best index is="<<best_index<<endl;
    cout<<"best element is="<<best_element;
    return 0;
}