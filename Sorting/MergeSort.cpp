#include<iostream>
using namespace std;

void merge(int arr[],int l, int mid,int h)
{
    int k,i,j;
    int n1=(mid-l)+1;
    int n2=h-mid;
    
    int lArray[n1];
    int hArray[n2];

    i = 0;   
    j = 0;    
    k = l;

    for (int i = 0; i < n1; i++) 
    {   
        lArray[i] = arr[l + i];  
    }  
    for (int j = 0; j < n2; j++)  
    {  
        hArray[j] = arr[mid + 1 + j];
    }
    while (i < n1 && j < n2)    
    {    
        if(lArray[i] <= hArray[j])    
        {    
            arr[k] = lArray[i];    
            i++;    
        }    
        else    
        {    
            arr[k] = hArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        arr[k] = lArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        arr[k] = hArray[j];    
        j++;    
        k++;    
    }    
}

void mergeSort(int arr[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}

int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1);
    
    cout<<"Elements after sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
