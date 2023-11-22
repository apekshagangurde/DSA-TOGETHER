class Solution{
    public:
    
    
    bool check(Node* left ,Node*right){
        if(left==NULL && right==NULL)
        return true;
        if (left==NULL || right==NULL || left->data !=right->data)
        return false;
        
        return check(left->left ,right->right ) && check(left->right ,right->left);
        
    }
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        
        if (root==NULL) 
        return true;
        return check(root->left,root->right);
	    
    }
   
};
