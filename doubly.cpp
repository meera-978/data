#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
node*prev,*next;
}*head=NULL;
void ins_beg(int v){
node*n=new node;
n->data=v;
n->prev=NULL;
n->next=head;
if(head) head->prev=n;
head=n;
}
void ins_end(int v){
node*n=new node;
n->data=v;
n->prev=n->next=NULL;
if(!head){head=n;return;}
node*t=head;
while(t->next) t=t->next;
t->next=n;
n->prev=t;
}
void del(int v){
node*t=head;
while(t&&t->data!=v) t=t->next;
if(!t){cout<<"Not found\n";return;}
if(t->prev) t->prev->next=t->next;
else head=t->next;
if(t->next) t->next->prev=t->prev;
delete t;
}
void disp(){
if(!head){cout<<"Empty\n";return;}
node*t=head;
cout<<"Fwd: ";
while(t){cout<<t->data<<" ";t=t->next;}
cout<<"\nRev: ";
t=head;while(t->next) t=t->next;
while(t){cout<<t->data<<" ";t=t->prev;}
cout<<"\n";
}
void main(){
clrscr();
int ch,v;
while(1){
cout<<"\n1.Beg 2.End 3.Del 4.Disp 5.Exit\nchoice:";
cin>>ch;
switch(ch){
case 1:cin>>v;ins_beg(v);break;
case 2:cin>>v;ins_end(v);break;
case 3:cin>>v;del(v);break;
case 4:disp();break;
case 5:exit(0);
}
}
getch();
}
