// Removing Duplicate from a Sorted Linked List(Ascending order)
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
void print(Node *& head){
    Node* temp =head;

    while(temp){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
}

Node* removeDuplicates(Node* &root)//In this function we'll be Altering the Original ListNode So Original ListNode couldnot be retained
{
    Node* first = root;

    while(first && first->next)
    {
        if(first -> data == first -> next -> data)
        {
            Node* temp = first -> next;
            first -> next = first ->next ->next;
            delete temp;
        }
        else
        first = first-> next;
    }
    return first;
}

main()
{
    Node* root = new Node(-1);
    insertatEnd(root,1);
    insertatEnd(root,1);
    insertatEnd(root,3);
    insertatEnd(root,5);
    insertatEnd(root,6);
    insertatEnd(root,6);
    insertatEnd(root,8);
    insertatEnd(root,9);

    cout<<"Before Rem Dupli: ";
    print(root -> next);
    cout<<"\n";

    removeDuplicates(root->next);
    cout<<"After Rem Dupli: ";
    print( root -> next);
}