#include<iostream>
using namespace std;
static int swapno=0;

void sw(int arr[],int i,int min_index)
{
    int temp=arr[i];
    arr[i]=arr[min_index];
    arr[min_index]=temp;
    swapno++;
}

int main()
{
    int n,j,min_index,comp=0;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        min_index=i;
        for(j=i+1;j<n;j++)
        {
            comp++;
            if(arr[min_index]>arr[j])
            {
                min_index=j;
            } 
        }
        sw(arr,i,min_index);
    }
    cout<<"Sorted elements:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nSwap:"<<swapno<<" Comparision:"<<comp;
}
