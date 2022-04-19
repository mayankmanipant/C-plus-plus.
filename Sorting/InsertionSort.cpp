#include<iostream>
using namespace std;

int main()
{
    int n,j,key,swap=0,comp=0;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        j=i-1;
        key=arr[i];
        while(j>=0 && arr[j]>key)
        {
            swap++;
            comp++;
            arr[j+1]=arr[j];
            j--;
        }
        swap++;
        arr[j+1]=key;
        
    }
    cout<<"Sorted Elements:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Swap:"<<swap<<" Comparision:"<<comp;
}
