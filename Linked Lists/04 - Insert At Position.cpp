// Inserting data to a particular position in Linked List
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
    Node* temp =head;

    while(temp){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
}
void InsertAtPos(Node* &c,int position,int currPos,int data)
{
    Node* root= c;

    while(root)
    {
        if(position-1 == currPos+1)
        {
            Node* temp = new Node(data);
            Node* curr = root->next;
            root->next = temp;
            temp -> next =curr;
        }
        root = root -> next;
        currPos++;
    }
    
}

main(){

    Node* root =new Node(-1);
    insertatEnd(root,11);
    insertatEnd(root,5);
    insertatEnd(root,0);
    insertatEnd(root,3);
    insertatEnd(root,9);
    insertatEnd(root,6);
    print(root->next);
    cout<<"\n";

    Node* r=root->next;
    InsertAtPos(r,7,0,22);
    print(r);
}