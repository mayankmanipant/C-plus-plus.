int longestSubstrDistinctChars (string s)
{
    // your code here
    int i=0,j=0;
    int ans=0;
    int n=s.size();
    set<char>st;
    
    while(j<n){
        if(st.find(s[j]) == st.end()){
            st.insert(s[j]);
            ans=max(ans,j-i+1);
            j++;
        }
        else{
            st.erase(s[i]);
            i++;
        }
    }
    return ans;
}
