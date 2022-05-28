#include<iostream>
#include<list>
using namespace std;

using namespace std;
 
/* Link list node */
class Node {
public:
    int data;
    Node* next;
};
 void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();
 
    /* put in the data */
    new_node->data = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 
/* Function to print linked list */
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

// sovle function for k reverse node

Node* solve(Node * head,int k){

    if(head == NULL ){return head;}
    Node* shead;
    Node* next1;
    Node* curr = head;
    Node* prev =NULL;
    int i=0;
    while(curr){



    }
    


}
 
/* Driver code*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;
 
    /* Created Linked list
       is 1->2->3->4->5->6->7->8->9 */
    push(&head, 9);
    push(&head, 8);
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
 
    cout << "Given linked list \n";
    printList(head);
    head = solve(head, 3);
 
    cout << "\nReversed Linked list \n";
    printList(head);
 
    return (0);
}