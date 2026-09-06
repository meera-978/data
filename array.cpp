#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main(){
int a[50],n,i,pos,val,key,ch;
clrscr();
cout<<"Enter size & elements :";
cin>>n;
for(i=0;i<n;i++) cin>>a[i];
while(1){
cout<<"\n1. Traverse 2. Insert 3. Delete 4. search 5. Exit\n choice:";
cin>>ch;
switch(ch){
case 1:
cout<<" Array : ";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\n";
break;
case 2:
cout<<" Enter pos & val:";
cin>>pos>>val;
for(i=n-1;i>=pos;i--)
a[i+1]=a[i];
a[pos]=val;
n++;
break;
case 3:
cout<<" Enter pos :";
cin>>pos;
for(i=pos;i<n-1;i++)
a[i]=a[i+1];
n--;
break;
case 4:
cout<<" Enter key : ";
cin>>key;
for(i=0;i<n;i++)
if(a[i]==key)
{
cout<<" Found at index "<<i<<"\n";
break;}
if(i==n) cout<<"Not found\n";
break;
case 5:
exit(0);
default:
cout<<" Invalid choice!\n";
}
}
}
