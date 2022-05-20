#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int l,int h,int key)
{
    if(l>h)
    {
        return -1;
    }
    int mid=(l+h)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    if(arr[l]<=arr[mid])
    {
        if(key>=arr[l] && key<=arr[mid])
        {
            return search(arr,l,mid-1,key);
        }
        else
        {
            return search(arr,mid+1,h,key);
        }
    }
    if(key>=arr[mid] && key<=arr[h])
    {
        return search(arr,mid+1,h,key);
    }
    else
    {
        return search(arr,l,mid-1,key);
    }
}

int main()
{
    int n,key;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter rotated array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key:";
    cin>>key;
    int j=search(arr,0,n-1,key);
    if(j!=-1)
    {
        cout<<"Index:"<<j;
    }
    else
    {
        cout<<"Key not found.";
    }
}
