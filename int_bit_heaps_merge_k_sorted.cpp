// Q :-
// Merge k sorted linked lists and return it as one sorted list.

// Example :

// 1 -> 10 -> 20
// 4 -> 11 -> 13
// 3 -> 8 -> 9
// will result in

// 1 -> 3 -> 4 -> 8 -> 9 -> 10 -> 11 -> 13 -> 20
#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
  
  };
struct compare {
    bool operator()(ListNode* a,  ListNode* b)
    {
        return ((a->val) >( b->val));
    }
};
    
ListNode* mergeKLists(vector<ListNode*> &A) {
    
    priority_queue < ListNode*, vector<ListNode*>, compare > pq;
    cout<<"kt \n";
    
    int n = A.size();
    
    for(int i=0;i<n;i++){
        
        // pq.push((A[i])->val);
        pq.push(A[i]);
    }
    ListNode* res = new ListNode(-1);
    ListNode* tk = new ListNode(4);
    ListNode* temp  = res;
    // ListNode * res = A[0];
    // ListNode * tj = A[0];
    
    while(!pq.empty()){
        
        tk = pq.top();
        pq.pop();
        temp->next = tk; // 
        if((tk->next)!=NULL){
            
            pq.push(tk->next);
        }
        temp = temp->next;

        
    }
    
    
    
    return res->next;

}

int main() 
{  
    vector<ListNode*> vc;
    ListNode* r1 = new ListNode(1);
    vc.push_back(r1);
    ListNode* r2 = new ListNode(4);
    vc.push_back(r2);
    ListNode* r3 = new ListNode(9);
    vc.push_back(r3);

    ListNode* t = mergeKLists(vc);

    while(t!=NULL){
        cout<<t->val<<" ";
        t = t->next;
    }

    cout<<endl;
    
    cout<<endl;
    return 0;
  }