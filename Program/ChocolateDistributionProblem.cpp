#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    int min_diff=INT_MAX;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    vector <int> nums;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        nums.push_back(arr[i]);
    }
    cout<<"Enter number of children:";
    cin>>c;
    sort(nums.begin(),nums.end());
    int i=0,min=0;
    while(c<=n)
    {
        min=nums[c-1]-nums[i];
        if(min<min_diff)
        {
            min_diff=min;
        }
        c++;
        i++;
    }
    cout<<"Minimum Difference:"<<min_diff;
}
