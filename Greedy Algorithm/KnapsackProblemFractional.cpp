#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a , pair<int,int>b)
{
    double r1 = (double)a.first / (double)a.second;
    double r2 = (double)b.first / (double)b.second;
    return r1 > r2;
}

int main()
{
    int n;
    double profit=0;
    cout<<"Enter the number of items:";
    cin>>n;
    vector <pair<double,double>> a(n);
    cout<<"Enter price and weight:";
    for(int i=0;i<n;i++)
        cin>>a[i].first  >> a[i].second;

    int w;
    cout<<"Enter the weight of the knapsack:";
    cin>>w;
    
    sort(a.begin(),a.end(),cmp);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i].first<<" "<<a[i].second<<endl;
    // }

    for(int i=0;i<n;i++)
    {
        if(a[i].second<=w)
        {
            w-=a[i].second;
            profit+=a[i].first;
        }
        else
        {
            profit+=w *(a[i].first/a[i].second);
            break;
        }
    }

    cout<<"Profit:"<<profit;
}
