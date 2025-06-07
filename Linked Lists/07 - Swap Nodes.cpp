//Swapping the Nodes alternatively
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
void print(Node * &head){
    Node * temp = head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}

Node* swapNodes(Node* root)
{
    Node* dummy = new Node(0);
    dummy -> next = root;
    Node* prev = dummy;

    while(prev -> next && prev -> next -> next)
    {
        Node* fir = prev -> next;
        Node* sec = fir -> next;

        fir -> next = sec -> next;
        sec -> next = fir;
        prev -> next = sec;
        prev = fir;
    }
    return dummy -> next;
}
main(){
    Node* root = new Node(-1);
    insertatEnd(root,7);
    insertatEnd(root,1);
    insertatEnd(root,9);
    insertatEnd(root,0);
    insertatEnd(root,2);
    insertatEnd(root,8);
    print(root);
    cout<<'\n';

    Node* ans = swapNodes(root);
    print(ans);
}