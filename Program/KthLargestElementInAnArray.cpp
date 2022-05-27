#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    vector <int> nums;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        nums.push_back(arr[i]);
    }
    cout<<"Enter the Kth  largest element to be found:";
    cin>>k;
    int j=0;
    sort(nums.begin(),nums.end());
    for(int i=n-1;i>=0;i--)
    {
        j++;
        if(j==k)
        {
            cout<<"Kth Largest element:"<<nums[i];
        }
    }
}
