#include<iostream>
using namespace std;
static int count=0;

int binarySearch(int arr[],int beg,int end,int key)
{
    while(end>=beg)
    {
        count++;
        int mid=(beg+end)/2;
        if(arr[mid]==key)
        { 
            return 0;
        }
        else if(key>arr[mid])
        {
            return binarySearch(arr,mid+1,end,key);
        }
        else
        {
             return binarySearch(arr,beg,mid-1,key);
        }
    }
}

int main()
{
    int n,key;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key element:";
    cin>>key;

    int result=binarySearch(arr,0,n-1,key);
    if(result==0)
    {
        cout<<"Present"<<endl;
        cout<<count;
    }
    else
    {
        cout<<"Not Present"<<endl;
        cout<<count;
    }
}
