#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n,flag=0;
     cout<<"Enter the size of the array:";
     cin>>n;
     int arr[n];
     vector <int> nums;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
         nums.push_back(arr[i]);
     }
     sort(nums.begin(),nums.end());
     for(int i=0;i<n;i++)
     {
         if(nums[i]==nums[i+1])
         {
             flag=1;
         }
     }
     if(flag==1)
     {
         cout<<"True";
     }
     else
     {
         cout<<"False";
     }
 }
