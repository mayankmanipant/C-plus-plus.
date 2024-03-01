#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v,int temp){
    if(v.size()==0 || v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int val=v[v.size()-1];
    v.pop_back();
    solve(v,temp);
    v.push_back(val);
}

void getSorted(vector<int>&v){
    if(v.size()<=1) return ;
    int temp=v[v.size()-1];
    v.pop_back();
    getSorted(v);
    solve(v,temp);
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    getSorted(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
