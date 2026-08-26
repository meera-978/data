#include<iostream.h>
#include<conio.h>
void main()
{
    int a[20],n,i,ch,p,x,key;
    clrscr();
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<n;i++) cin>>a[i];
    do
    {
        cout<<"\n1.Insert  2.Delete  3.Search  4.Display  5.Exit";
        cout<<"\nChoice: ";
        cin>>ch;

        if(ch==1)
        {
            cout<<"Position and value: ";
            cin>>p>>x;
            for(i=n;i>=p;i--) a[i]=a[i-1];
            a[p-1]=x;
            n++;
        }
        else if(ch==2)
        {
            cout<<"Position: ";
            cin>>p;
            for(i=p-1;i<n-1;i++) a[i]=a[i+1];
            n--;
        }
        else if(ch==3)
        {
            cout<<"Search value: ";
            cin>>key;
            for(i=0;i<n;i++)
                if(a[i]==key) break;
            if(i<n) couto<<"Found at "<<i+1;
            else cout<<"Not Found";
        }
        else if(ch==4)
        {
            for(i=0;i<n;i++) cout<<a[i]<<" ";
        }
    }while(ch!=5);

    getch();
}
