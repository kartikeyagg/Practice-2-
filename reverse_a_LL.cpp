#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }};
pair<node *,node*> reverseLL(node * head,int k){

        if(head == NULL || head->next ==NULL){return {head,head};}
        int k1 = k;
        node* prev  = NULL;
        node* curr = head;
        node* next;
        node* head1 = head;
        int i=0;
        while(k>0){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            k--;
            if(curr==NULL){
                return make_pair(prev,head1) ;
            }
        }
        if(next!=NULL){
         head1->next = reverseLL(next,k1).first;
        }
        cout<<"head1 is "<<head1->data<<endl;
        cout<<"the next is "<<next->data<<endl;
        cout<<"the curr is "<<curr->data<<endl;
        return make_pair(prev,head1);

}
node * new_node(int data1){
    node * t = (node * )malloc(sizeof(node));
    t ->data = data1;
    t->next = NULL;
    return t;
}
node* build_list(vector<int> &t){

    node * head = (node * )malloc(sizeof(node));
    node *tkt;
    int flag=0;
    head->data = 32;
    for(auto x:t){
        cout<<"for x="<<x<<endl;
        head->next = new_node(x);
        if(flag ==0){
            flag++;
            tkt = head->next;
        }
        head = head->next;
        
    }
    return tkt;


}
void print_list(node* t){
    cout<<"printing list"<<endl;
    while(t!=NULL){
        cout<<(t->data)<<" ";
        t = t->next;
    }
    cout<<endl;
}

int main() 
{  

    vector<int> v = {1,2,3,4,5};
    node* nt = build_list(v);
    print_list(nt);
    node * temp;
    node * temp2;
    pair<node*,node*> p1;
    cout<<"reversing now"<<endl;
    p1 =reverseLL(nt,3);
    temp = p1.first;
    temp2 = p1.second;
    int i=0,j=0;
    // while(){

    // }
    print_list(temp);
    cout<<endl;
    return 0;
  }