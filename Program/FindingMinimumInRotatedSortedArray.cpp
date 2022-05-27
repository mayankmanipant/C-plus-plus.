#include<bits/stdc++.h>
using namespace std;

int searchMinimum(int arr[],int l,int h)
{
    if(l>h)
    {
        return -1;
    }
     
    int mid=(l+h)/2;
    if(arr[mid]>arr[mid+1])
    {
        return arr[mid+1];
    }

    if(arr[l]<=arr[mid])
    {
        return searchMinimum(arr,mid+1,h);
    }
    
    if(arr[l]>=arr[mid])
    {
        return searchMinimum(arr,l,mid-1);
    }
}

int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=searchMinimum(arr,0,n-1);
    if(j==-1)
    {
        cout<<"Number not found:";
    }
    else 
    {
        cout<<"Minimum number:"<<j;
    }
}
