#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int max_pro=INT_MIN;
    int mul=1;
    cout<<"Enter the size of array:";
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    for(int i=0;i<n;i++)
    {
        mul*=nums[i];
        max_pro=max(max_pro,mul);
        if(mul==0)
        {
            mul=1;
        }
    }
 
        // to check from back
    mul=1;
    for(int i=n-1;i>=0;i--)
    {
        mul*=nums[i];
        max_pro=max(max_pro,mul);
        if(mul==0)
        {
            mul=1;
        }
    }
    
    cout<<"Maximum SubArray Product:"<<max_pro;
}
