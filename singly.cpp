# include <iostream.h>
# include <conio.h>
# include <stdlib.h>
struct node {
int data;
node * next;
} * head = NULL;
void ins_beg(int val)
{
node * n = new node;
n -> data = val;
n -> next = head;
head = n;
}
void ins_end (int val)
{
node * n = new node;
n -> data = val;
n -> next = NULL;
if(head == NULL)
head = n;
else
{
node * t = head;
while(t->next != NULL)
t = t -> next;
t -> next = n;
}
}
void del (int val)
{
node * t = head, * p = NULL;
while(t != NULL && t->data != val)
{ p = t; t = t -> next; }
if(t== NULL)
{ cout << " Not found\n"; return; }
if(p==NULL)
head = t->next;
else
p->next = t->next;
delete t;
}
void disp()
{
if(head == NULL)
{ cout << " Empty \n"; return; }
node * t = head;
while(t != NULL)
{ cout << t -> data << " -> ";
t = t -> next;
}
cout << "NULL\n";
}
void main()
{
clrscr();
int ch, val;
while(1)
{
cout <<"\n Insert Beg 2. Insert End 3. Delete 4. Display 5. Exit\n";
cout << " Enter choice :";
cin>>ch;
switch(ch)
{
case 1: cout << "value: "; cin>>val;
ins_beg(val); break;
case 2: cout <<"value: "; cin>>val;
ins_end (val); break;
case 3: cout << " Del value :"; cin>>val;
del(val); break;
case 4: disp(); break;
case 5: exit(0);
default: cout << " Invalid \n";
}
}
getch(); }
