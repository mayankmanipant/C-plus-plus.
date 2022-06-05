#include<bits/stdc++.h>
using namespace std;

struct Job
{
    int id;
    int price;
    int deadline;
};

bool cmp(Job a, Job b)
{
    return a.price>b.price;
}

int main()
{
    int n;
    cout<<"Enter the total number of jobs:";
    cin>>n;

    Job a[n];
    cout<<"Enter the ID,Profit and Deadline:";
    for(int i=0;i<n;i++)
    {
        cin >> a[i].id >> a[i].price >> a[i].deadline;
    }

    sort(a,a+n,cmp);
    
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i].first<<" "<<a[i].second<<endl;
    // }

    int slot[n],profit=0;
    vector <int>result;
    for(int i=0;i<n;i++)
    {
        slot[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        for (int j = min(n, a[i].deadline) - 1; j >= 0; j--)
        {
            if(slot[j]==0)
            {
                profit+=a[i].price;
                result.push_back(a[i].id);
                slot[j]=1;
                
                break;
            }
        }
    }

    cout<<"Sequence of job to be done:";
    for(int i=0;i<result.size();i++)
    {
        cout<<"JOB:"<<result[i]<<endl;
    }    
    cout<<"Maximum Profit:"<<profit;
}
