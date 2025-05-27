#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * head;
    Node * next;
    Node * prev;

    Node(int d)
    {
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};
void insertatEnd(Node *& head,int data){
    Node* temp = new Node(data);//Creating Node of the data

    if(!head)
    {
        head = temp;
        return;
    }

    Node* x = head;//Assigning head to x
    while( x-> next )//moving upto last value of the List
    {
        x=x->next;
    }
    x -> next = temp;//Last value's next will be entered data+
}
void print(Node * head){
    Node * temp = head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}
Node* reverse(Node* root)
{
    Node* prev = NULL;
    Node* curr = root;
    Node* next = NULL;

    while(curr != NULL)
    {
        next = curr -> next;// Storing next node
        curr -> next = prev;// current points to prev
        prev = curr;// updating prev to current
        curr = next;// updating current to its next
    }
    return prev;
}
main(){
   Node * root = new Node(-1);
   insertatEnd(root,3); 
   insertatEnd(root,2); 
   insertatEnd(root,8); 
   insertatEnd(root,9); 
   insertatEnd(root,0); 
   insertatEnd(root,1); 

   print(root);
   cout<<endl;
   Node* ans = reverse(root);
   print(ans);
}
