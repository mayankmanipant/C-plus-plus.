class Solution{
  public:
    /*You are required to complete this method*/
    int minDepth(Node *root) {
        // Your code here
        if(root==NULL) return 0;
        
        int left=minDepth(root->left);
        int right=minDepth(root->right);
        if(root->left && root->right){
            return min(left,right)+1;
        }
        else{
            return max(left,right)+1;
        }
    }
    
};
