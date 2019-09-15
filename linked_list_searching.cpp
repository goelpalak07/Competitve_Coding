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
int search(struct node* head, int x)
{
    int i=1;
    while(head!=NULL)
    {
        if(head->info==x)
            return i;
        else i++;
        head=head->next;
    }
    return 0;
}
int main()
{
    int i,x;
    cout<<"Enter element to be searched.";
    cin>>x;
    node *head=new node();
    head=makeList(head);
    i=search(head,x);
    if(i==0)
        cout<<"Not found."<<endl;
    else
        cout<<"Element found at "<<i<<" position."<<endl;
    cout<<"List is : ";
    while(head!=NULL)
    {
        cout<<head->info<<" ";
        head=head->next;
    }
    return 0;
}

