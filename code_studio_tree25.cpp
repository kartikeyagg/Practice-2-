/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/
// Approach :-  the left and right veritcal trees should be same
#include<bits/stdc++.h>

bool setcheck(multimap<int,int > &a,multimap<int,int > &b){
    
    auto it = a.begin();
    auto jt = b.begin();
//     jt--;
    while(it != a.end() && jt!=b.end())//(it!=jt)
    {
        
        if(it.first == jt.first && jt.second == it.second)  {
            it++;
            jt++;
        }
        else return 0;
        
    }
    if(it == a.end() && jt==b.end()){return 1;}
    return 0;
}
map<int ,multimap<int,int > > mp;
bool verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.
    mp.clear();
//     vector<int> res;
//     vector<vector<int>> vec;
//     queue<TreeNode<int> *> qu;
    queue<pair<TreeNode<int> *, pair<int,int> >> qu;
    TreeNode<int> *temp;
    if(!root){return 1;}
    qu.push({root,{0,0}});
//     mp[root] = {0,0};
    int x,y;
    while(!qu.empty()){
        temp = (qu.front()).first;
        x = (qu.front()).second.first;
        y = (qu.front()).second.second;
        qu.pop();
        // map :-  Node* , vertical index, level ,
        if((temp->left)){
            qu.push({temp->left,{x-1,y+1} });
//             mp[temp->left] = { mp[temp].first -1, mp[temp].second+1 }
//             mp[temp->left] = { mp[temp].first -1, mp[temp].second+1 }
        }
        if((temp->right)){
            qu.push({temp->right,{x+1,y+1}});
//             mp[temp->right] = { mp[temp].first +1, mp[temp].second+1 }
        }
//         map[temp][x] = y;
        if(mp.find(x) == mp.end()){
            mp[x] = {{y,temp->data}};
        }
//         mp[x][y] = temp->data;
        else{
            mp[x].insert({y,temp->data});
        }
    }
//     for(auto x: mp){
//         for(auto y:x.second){
//             res.push_back(y.second);
//         }
//     }
//     return res;   
    auto it = mp.begin();
    auto jt = mp.end();
    jt--;
    while(distance(it,jt)>0) //while(it!=jt)
    {
        
        if(setcheck(it.second,jt.second) ) {
            it++;
            jt--;
        }
        else return 0;
        
    }
        return 1;
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    return verticalOrderTraversal(root);
}