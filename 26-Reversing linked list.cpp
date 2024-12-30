//Program to reverse linked list
#include<iostream>
using namespace std;


//creating class
class node{
    public :
    int data;
    node*head;
    node *next;
    node*prev;

    node (int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

};

//Function to add element to list
void insert(node * &head,int d)
{
    node*temp=new node(d);   
    temp->next=head;
    head=temp;
    
} 

//Function to print element of list
void print(node * &head)
{
    node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//Function to reverse linked list
node* reverse(node*head)
{
    node*prev=NULL;

    while(head!=NULL)
    {
        node*temp=head->next;
        head->next=prev;
        prev=head;
        head=temp;
        
    }
    return prev;

}

int main()
{
    node*list=new node(10);

    insert(list,6);
    insert(list,7);
    insert(list,2);
    insert(list,21);
    insert(list,9);
    insert(list,86);



    cout<<"List before reversing: ";
    print(list);


    node*ans=reverse(list);//storing head of linked list
    cout<<"\nList after reversing: ";
    print(ans);
}