/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   int diameterOpt(TreeNode *root, int* height) 
{ 
  /* lh --> Height of left subtree 
     rh --> Height of right subtree */
  int lh = 0, rh = 0; 
   
  /* ldiameter  --> diameter of left subtree 
     rdiameter  --> Diameter of right subtree */
  int ldiameter = 0, rdiameter = 0; 
   
  if(root == NULL) 
  { 
    *height = 0; 
     return 0; /* diameter is also 0 */
  } 
   
  /* Get the heights of left and right subtrees in lh and rh 
    And store the returned values in ldiameter and ldiameter */
  ldiameter = diameterOpt(root->left, &lh); 
  rdiameter = diameterOpt(root->right, &rh); 
   
  /* Height of current node is max of heights of left and 
     right subtrees plus 1*/
  *height = max(lh, rh) + 1; 
   
  return max(lh + rh + 1, max(ldiameter, rdiameter)); 
} 
    int diameterOfBinaryTree(TreeNode* root) {
      int height=0;
      int result=diameterOpt(root,&height);
      if (result!=0) result--;
      return result;
    }
};