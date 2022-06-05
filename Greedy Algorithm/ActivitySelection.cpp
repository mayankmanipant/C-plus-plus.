#include<bits/stdc++.h>
using namespace std;


bool cmp( pair<int,int>a, pair<int,int>b )
{
    return a.second<b.second;
}

int main()
{
    int n;
    cout<<"Enter the number of activity:";
    cin>>n;
    
    vector <pair<int,int>> a(n);

    cout<<"Enter the Start and Finish Time:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first >> a[i].second;
    }

    sort(a.begin(),a.end(),cmp);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i].first<<" "<<a[i].second<<endl;
    // }

    int count=1;
    int j=0;
    cout<<"Activity are at index:"<<j;
    
    for(int i=1;i<n;i++)
    {
        if(a[i].first >= a[j].second)
        {
            cout<<" "<<i;
            j=i;
            count++;
        }
    }
    cout<<"\nTotal number of activity:"<<count;
}
