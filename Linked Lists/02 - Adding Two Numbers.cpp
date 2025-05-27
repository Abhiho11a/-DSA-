//Program to Add two numbers using linked List
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

    Node* x = head;// Assigning head to x
    while( x-> next )// moving upto last value of the List
    {
        x=x->next;
    }
    x -> next = temp;// Last value's next will be entered data+
}
void print(Node *& head){
    Node* temp =head;

    while(temp){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
}

Node* add(Node* root1,Node* root2)
{
    int carry = 0;
    Node* a=new Node(-1);
    Node* ans = a;
    while(root1 || root2 || carry)// Looping will run even if any of these three is valid
    {
        int sum = carry;// Sum will be initialized as Carry it will be used in further steps
    
        if(root1)
        {
            sum += root1 -> data;
            root1 = root1 -> next;
        }
        if(root2)
        {
            sum += root2-> data;
            root2 = root2 -> next;
        }

        ans -> next = new Node(sum%10);// only One's part of the number is considered
        ans = ans ->next ;
        carry = sum / 10; // carry will be calculated
    }
    return a -> next;// Returning a->next as first node is dummy
}

main(){

    Node * root1 = new Node(0);// Creating List1
    insertatEnd(root1,3);// Inserting
    insertatEnd(root1,6);
    insertatEnd(root1,7);
    insertatEnd(root1,9);
    insertatEnd(root1,0);
    insertatEnd(root1,1);
    cout<<"Num-1: ";
    print(root1);
    cout<<"\n";

    Node * root2 = new Node(2);// Creating List2
    insertatEnd(root2,4);
    insertatEnd(root2,7);
    insertatEnd(root2,0);
    insertatEnd(root2,9);
    insertatEnd(root2,3);
    insertatEnd(root2,2);
    cout<<"Num-2: ";
    print(root2);
    cout<<"\n";

    Node* ans1=add(root1,root2);
    cout<<"After Adding: ";
    print(ans1);
}