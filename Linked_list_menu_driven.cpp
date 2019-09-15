#include<bits/stdc++.h>
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
struct node* makeListInsertionHead(struct node* head,int x)
{
        node*temp=new node();
        temp->info=x;
        temp->next=head;
        head=temp;
    return head;
}
struct node* makeListInsertionTail(struct node* head,int x)
{
    node* last=new node();
    node* curr=head;
    while(curr->next!=NULL)
        curr=curr->next;
    last->info=x;
    curr->next=last;
    return head;
}
struct node* makeListInsertionPosition(struct node* head,int num,int pos)
{
    int i;
    node *check=head;
    for(i=1;i<pos-1;i++)
        check=check->next;
    node* p=new node();
    p->info=num;
    p->next=check->next;
    check->next=p;
    return head;
}
struct node* makeListDeleteHead(struct node* head)
{
    int x=head->info;
    head=head->next;
    cout<<"Deleted info is "<<x<<endl;
    return head;
}
struct node* makeListDeleteTail(struct node* head)
{
    node* curr=head;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    int x=curr->next->info;
    curr->next=NULL;
    cout<<"Deleted info is "<<x<<endl;
    return head;
}
struct node* makeListDeletePosition(struct node* head,int pos)
{
    node* curr=head;
    for(int i=1;i<pos-1;i++)
        curr=curr->next;
    int x=curr->next->info;
    curr->next=curr->next->next;
    cout<<"Deleted info is"<<x<<endl;;
    return head;
}
void display(struct node* head)
{
    while(head!=NULL)
    {
        cout<<head->info<<" ";
        head=head->next;
    }
     return;
}
int main()
{
    int x,num,pos;
    node* head=new node();
    head=makeList(head);
    do{
        cout<<"\n\nEnter 1 for insertion at start\n2 for insertion at last\n3 for insertion at specific position\n4 for deletion at head\n5 for deletion at tail\n6 for deletion at specific position\n7 for display\n8 for for exit";
        cin>>x;
        switch(x)
        {
        case 1:
            cout<<"Enter element";
            cin>>num;
            head=makeListInsertionHead(head,num);
            break;
        case 2:
            cout<<"Enter element";
            cin>>num;
            head=makeListInsertionTail(head,num);
            break;
        case 3:
            cout<<"Enter position";
            cin>>pos;
            cout<<"Enter element";
            cin>>num;
            head=makeListInsertionPosition(head,num,pos);
            break;
        case 4:
            head=makeListDeleteHead(head);
            break;
        case 5:
            head=makeListDeleteTail(head);
            break;
        case 6:
            cout<<"Enter position";
            cin>>pos;
            head=makeListDeletePosition(head,pos);
            break;
        case 7:
            display(head);
            break;
        case 8:
            break;
        }
    }while(x!=8);
    return 0;
}

