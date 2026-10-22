#include<iostream.h>
#include<conio.h>
#define SIZE 5
int queue[SIZE];
int front=-1;
int rear=-1;
void insert(int value)
{
if((rear+1)%SIZE==front)
cout<<"Queue is full\n";
else
{
if(front==-1)
front=0;
rear=(rear+1)%SIZE;
queue[rear]=value;
cout<<"Element inserted\n";
}
}
void del()
{
if(front==-1)
cout<<"Queue is empty\n";
else
{
cout<<"Deleted element: "<<queue[front]<<"\n";
if(front==rear)
{
front=-1;
rear=-1;
}
else
front=(front+1)%SIZE;
}
}
void display()
{
int i;
if(front==-1)
cout<<"Queue is empty\n";
else
{
cout<<"Queue elements: \n";
i=front;
while(1)
{
cout<<queue[i]<<" ";
if(i==rear)
break;
i=(i+1)%SIZE;
}
cout<<"\n";
}
}
void main()
{
clrscr();
insert(10);
insert(20);
insert(30);
display();
del();
display();
insert(40);
insert(50);
display();
getch();
}
