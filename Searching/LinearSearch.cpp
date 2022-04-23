#include<iostream>
using namespace std;

int main()
{
    int n,key,flag=0;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched:";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"The number is present.";
    }
    else
    {
        cout<<"The number is not present.";
    }
}
