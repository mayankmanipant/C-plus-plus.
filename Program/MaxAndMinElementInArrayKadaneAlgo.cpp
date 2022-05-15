#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int max_sum=INT_MIN;
    int sum=0;
    cout<<"Enter the size of array:";
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
        max_sum=max(max_sum,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<"Maximum SubArray Sum:"<<max_sum;
}
