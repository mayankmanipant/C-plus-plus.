#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"The sorted elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
