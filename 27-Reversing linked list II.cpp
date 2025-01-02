//Program to reverse a linked list from right to left interval
#include<iostream>
using namespace std;

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



void insert(node * &head,int d)
{
    node*temp=new node(d);   
    temp->next=head;
    head=temp;
    
} 
void print(node * &head)
{
    node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}

node* reverse(node*head,int left,int right)
{
    node* dummy = new node(0);
        dummy->next = head;
        node* prev = dummy;

        for (int i = 0; i < left - 1; i++) //till the starting of the interval
        {
            prev = prev->next;
        }

        node* cur = prev->next;

        for (int i = 0; i < right - left; i++)//From strating of interval to end
        {
            node* temp = cur->next;
            cur->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }

        return dummy->next;      
}

int main()
{
    node *x= new node(10);

    node* head=x;
    insert(head,111);
    insert(head,03);
    insert(head,75);
    insert(head,43);
    insert(head,76);
    insert(head,99);
    insert(head,0);
    cout<<"Before reversing: ";
    print(head);
    

    cout<<"After reversing ";
    node* ans=reverse(head,2,6);
    print(ans);

}