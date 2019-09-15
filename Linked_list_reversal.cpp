#include<iostream>

using namespace std;

struct node{
int info;
struct node *next;
};
struct node* makeList(struct node *curr)
{
    node* head=curr;
    int i;
    for(i=10;i>0;i--)
    {
        node* p=new node();
        p->info=i;
        curr->next=p;
        curr=curr->next;
    }
    return head->next;
}
struct node* reversal(struct node *head)
{
    node* prev=new node();
    node* nextnode=new node();
    while(head!=NULL)
    {
        nextnode=head->next;
        head->next=prev;
        prev=head;
        head=nextnode;
    }
    return prev;
}
int main()
{
    node *head=new node();
    head=makeList(head);
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->info<<" ";
        curr=curr->next;
    }
    cout<<endl;
    curr=reversal(head);
    while(curr->next!=NULL)
    {
        cout<<curr->info<<" ";
        curr=curr->next;
    }
    return 0;
}
