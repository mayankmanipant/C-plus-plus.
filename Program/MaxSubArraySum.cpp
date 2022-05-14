#include<iostream>
using namespace std;

int main()
{
    int n,sum=-100000;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        for(int i=0;i<n;i++)
        {
            int s=0;
            for(int j=i;j<n;j++)
            {
                s+=arr[j];
                if(sum<s)
                {
                    sum=s;
                }
            }
        }
    cout<<"Maximum SubArray Sum:"<<sum;
}
