int search(string pat, string txt) {
	    // code here
	    unordered_map<char,int>mp;
	    
	    for(auto x:pat){
	        mp[x]++;
	    }
	    
	    int i=0,j=0;
	    int k=pat.size();
	    int count=mp.size();
	    int ans=0;
	    
	    
	    while(j < txt.size()){
	        if(mp.find(txt[j])!=mp.end()){
	            mp[txt[j]]--;
	            if(mp[txt[j]]==0){
	                count--;
	            }
	        }
	        
	        if(j-i+1 < k){
	            j++;
	        }
	        
	        else if(j-i+1 == k){
	            if(count==0){
	                ans++;
	            }
	            if(mp.find(txt[i])!=mp.end()){
	                mp[txt[i]]++;
	                
	                if(mp[txt[i]] == 1)
                        count++;
	            }
	            i++;
	            j++;
	        }
	    }
	    return ans;
	}
