#include<iostream.h>
#include<conio.h>
#include <process.h>
const int size=5;
void insert(int q1[5],int &f,int &r)
{
	if((f==0 && r==(size-1))||(f==r+1))
	{cout<<f<<r<<endl;
		cout<<"overflow";}
	else
	{
		cout<<"\n enter the element to be inserted \n";
		int n;
		cin>>n;
		if(r==-1)
			f=r=0;
		else if (r==size-1)
			r=0;
		else
			r=r+1;
		q1[r]=n;
	}
}
void delet(int q1[5],int &f,int &r)
{

	if(f==-1)
		cout<<"underflow";
	else
	{
		cout<<"the element to be deleted : "<<q1[f]<<endl;
		if(f==r)
			f=r=-1;
		else if (f==size-1)
			f=0;
		else
			f=f+1;
	}
}
void traversal(int q1[5],int f,int r)
{
	if(f==-1)
		cout<<"Empty Queue";
	else
	{
		if(f<=r)
		{
			for(int i=f;i<=r;i++)
				cout<<q1[i]<<"->";
			cout<<endl;
		}
		else
		{ int i=f;
			while(i<=size)
				cout<<q1[i++]<<"->";
			i=0;
			while(i<=r)
				cout<<q1[i++]<<"->";
			cout<<endl;
		}
	}
}
void main()
{
	int queue[size],front=-1,rear=-1;
	char ch='y';
	int choice;
	do
	{      clrscr();
		cout<<"1. Insert"<<endl;
		cout<<"2. Delete"<<endl;
		cout<<"3. traversal"<<endl;
		cout<<"4. Quit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: insert(queue,front,rear);
					break;
			case 2: delet(queue,front,rear);
					break;
			case 3: traversal(queue,front,rear);
					getch();
					break;
			case 4: exit(0);
			default:cout<<"Wrong Choice";
		}
		cout<<"\n Want to continue(Y or y): Press any other key to exit";
		cin>>ch;
	}while(ch=='y');
}
