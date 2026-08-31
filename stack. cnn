#include<iostream.h>
#include<conio.h>
#define MAX 5
void main()
{
int s[MAX],top=-1,ch,x,i;
clrscr();
do
{
cout<<"\n\n1.Push  2.Pop  3.Peek  4.Display  5.Exit";
cout<<"\nEnter choice: "; cin>>ch;
switch(ch)
{
case 1:
if(top==MAX-1) cout<<"Stack Overflow";
else { cout<<"Enter element: "; cin>>x; s[++top]=x; }
break;
case 2:
if(top==-1) cout<<"Stack Underflow";
else cout<<"Popped: "<<s[top--];
break;
case 3:
if(top==-1) cout<<"Stack is empty";
else cout<<"Top: "<<s[top];
break;
case 4:
if(top==-1) cout<<"Stack is empty";
else for(i=top;i>=0;i--) cout<<s[i]<<" ";
break;
}
}while(ch!=5);
getch();
}
