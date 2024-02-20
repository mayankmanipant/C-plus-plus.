class Solution {
public:
    string minWindow(string s, string t) {
        int i=0,j=0;
        int n=s.size();

        unordered_map<char,int>mp;
        for(auto x:t){
            mp[x]++;
        }

        int count=mp.size(),ma=INT_MAX,ind1=0,ind2=0;

        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count--;
                }
            }
            while(count==0){
                if(mp.find(s[i])!=mp.end()){
                    ma=min(ma,j-i+1);
                    if(ma==j-i+1)
                        ind1=i,ind2=j;
                    mp[s[i]]++;
                    if(mp[s[i]]==1)
                        count++;
                }
                i++;
            }
            j++;
        }
        string st;
        if(ma==INT_MAX)
            return st;
        for(int i=ind1;i<=ind2;i++){
            st+=s[i];
        }
        return st;
    }
};
