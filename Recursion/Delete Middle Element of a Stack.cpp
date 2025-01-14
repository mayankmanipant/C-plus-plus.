class Solution {
  public:
    // Function to delete middle element of a stack.
    void solve(stack<int>&s,int k){
        if(k==1){
            s.pop();
            return;
        }
        int temp=s.top();
        s.pop();
        solve(s,k-1);
        s.push(temp);
    }
    void deleteMid(stack<int>& s) {
        // code here..
        int len=s.size();
        int k=ceil((len+1)/2.0);
        if(len==0){
            return;
        }
        solve(s,k);
    }
};
