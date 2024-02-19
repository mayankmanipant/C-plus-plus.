#include<bits/stdc++.h>
using namespace std;

int main(){
    // (1) number of types of toys will always be 2  
    // (2) toys should be in continous order
    // (3) the boys should have maximum number of toys while following the above two conditions
    
    int n;
    cin>>n;
    vector<int>toys(n);

    for(int i=0;i<n;i++){
        cin>>toys[i];
    }

    int i=0,j=0,ans=1;
    unordered_map<int,int>mp;

    while(j<n){
        mp[toys[j]]++;

        if(mp.size()<=2){
            ans=max(ans,j-i+1);
        }
        if(mp.size()>2){
            while(mp.size()>2){
                mp[toys[i]]--;
                if(mp[toys[i]]==0){
                    mp.erase(toys[i]);
                }
                i++;
            }
        }
        j++;
    }
    cout<<ans;
}
