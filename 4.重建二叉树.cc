/*
Pro：输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回
*/

class Solution {
public:
    struct TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in) {
        int sz=pre.size();
        return buildTree(pre,in,0,sz-1,0,sz-1);
    }
private:
    TreeNode * buildTree(vector<int> pre,vector<int> in,int pL,int pR,int mL,int mR){
        if(pL>pR) return NULL;
        int sz=0,p;
        //cout<<pre[pL]<<"**"<<endl;
        for(int i=mL;i<=mR;i++){
            //cout<<in[i]<<"=="<<endl;
            if(in[i]!=pre[pL]) sz++;
            else{
                p=i;
                break;
            }
        }
        TreeNode *rt=new TreeNode(pre[pL]);
        
        rt->left=buildTree(pre,in,pL+1,pL+sz,mL,mL+sz-1);
        rt->right=buildTree(pre,in,pL+sz+1,pR,mL+sz+1,mR);
        return rt;
    }
};
