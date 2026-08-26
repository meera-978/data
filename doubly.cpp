#include<iostream.h>
#include<conio.h>
struct Node
{
    int data;
    Node *prev,*next;
};
Node *head=NULL;
void insertBeg(int x)
{
    Node *p=new Node;
    p->data=x;
    p->prev=NULL;
    p->next=head;
    if(head!=NULL) head->prev=p;
    head=p;
}
void insertEnd(int x)
{
    Node *p=new Node,*t=head;
    p->data=x;
    p->next=NULL;
    if(head==NULL)
    {
        p->prev=NULL;
        head=p;
    }
    else
    {
        while(t->next!=NULL) t=t->next;
        t->next=p;
        p->prev=t;
    }
}
void del(int x)
{
    Node *t=head;
    while(t!=NULL && t->data!=x) t=t->next;
    if(t==NULL) return;
    if(t->prev!=NULL) t->prev->next=t->next;
    else head=t->next;
    if(t->next!=NULL) t->next->prev=t->prev;
    delete t;
}
void display()
{
    Node *t=head,*last;
    cout<<"\nForward: ";
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        last=t;
        t=t->next;
    }
    cout<<"\nBackward: ";
    while(last!=NULL)
    {
        cout<<last->data<<" ";
        last=last->prev;
    }
}
void main()
{
    int ch,x;
    clrscr();

    do
    {
        cout<<"\n1.Insert Beg  2.Insert End  3.Delete  4.Display  5.Exit";
        cout<<"\nChoice: ";
        cin>>ch;

        if(ch==1)
        {
            cin>>x;
            insertBeg(x);
        }
        else if(ch==2)
        {
            cin>>x;
            insertEnd(x);
        }
        else if(ch==3)
        {
            cin>>x;
            del(x);
        }
        else if(ch==4)
            display();
    }while(ch!=5);
    getch();
}
