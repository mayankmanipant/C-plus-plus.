#include<bits/stdc++.h>
using namespace std;

vector<int> repeated(vector<int>A,int suminput,int sum)
{
    int a,b;
    int s=0,diff;
    vector<int> B;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i]==A[i+1])
        {
            a=A[i];
            s=suminput-A[i];
            diff=sum-s;
            B.push_back(a);
            B.push_back(diff);
        }
    }
    for(int i=0;i<B.size();i++)
    {
        cout<<B[i]<<" ";
    }
}

int main()
{
    int n,suminput=0,sum=0;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    vector <int> A;
    for(int i=0;i<n;i++)
    {
        sum+=i+1;
        cin>>arr[i];
        suminput+=arr[i];
        A.push_back(arr[i]);
    }
    repeated(A,suminput,sum);
}
