#include<iostream>
using namespace std;

void swap(int arr[],int i,int j)
{
    int temp;
    temp=arr[j];
    arr[j]=arr[i];
    arr[i]=temp;
}

int partition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j)
        {
            swap(arr,i,j);
        }
    }
    swap(arr,l,j);
    return j;
}

void quickSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int j=partition(arr,l,h);
        quickSort(arr,l,j);
        quickSort(arr,j+1,h);
    }
}

int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Emter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    quickSort(arr,0,n);
    
    cout<<"Sorted elements:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
