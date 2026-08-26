#include<iostream.h>
#include<conio.h>
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
void insertBeg(int x)
{
    Node *p=new Node;
    p->data=x;
    p->next=head;
    head=p;
}
void insertEnd(int x)
{
    Node *p=new Node,*t=head;
    p->data=x;
    p->next=NULL;
    if(head==NULL) head=p;
    else
    {
        while(t->next!=NULL) t=t->next;
        t->next=p;
    }
}
void del(int x)
{
    Node *t=head,*p;
    if(head==NULL) return;
    if(head->data==x)
    {
        head=head->next;
        delete t;
        return;
    }
    while(t!=NULL && t->data!=x)
    {
        p=t;
        t=t->next;
    }
    if(t!=NULL)
    {
        p->next=t->next;
        delete t;
    }
}
void display()
{
    Node *t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
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
