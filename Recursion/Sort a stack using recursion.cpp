#include<bits/stdc++.h>

using namespace std;

void solve(stack<int>&s,int temp){
    if(s.size()==0 || s.top()<=temp){
        s.push(temp);
        return;
    }
    int val=s.top();
    s.pop();
    solve(s,temp);
    s.push(val);
}

void getSorted(stack<int>&s){
    if(s.size()<=1) return ;
    int temp=s.top();
    s.pop();
    getSorted(s);
    solve(s,temp);
}

 int main(){
    int n;
    cin>>n;
    stack<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }

    getSorted(s);

    for(int i=0;i<n;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
 }
