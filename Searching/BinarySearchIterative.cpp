#include<iostream>
using namespace std;

int main()
{
    int n,key;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number to be searched:";
    cin>>key;
    int end=n-1,beg=0,mid,flag=0;
    while(end>=beg)
    {
        mid=((end+beg)/2);
        if(key==arr[mid])
        {
            cout<<"The number is present.";
            flag=1;
            break;
        }
         if(key>arr[mid])
        {
            beg=(mid+1);
            continue;
        }
        else if(key<arr[mid])
        {
            end=(mid-1);
            continue;
        }
    }
    if(flag==0)
    {
        cout<<"NOT PRESENT";
    }
}
