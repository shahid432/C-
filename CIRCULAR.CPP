// Circular Queue Operations
#include<iostream.h>
#include<conio.h>
int cQueue[50], n=50, front=-1, rear=-1;
void enQueue(int value)
{
	if((front==0 && rear==n-1) || (front==rear+1))
		cout<<"Circular Queue is full"<<endl;
	else
	{
		if(rear==n-1 && front!=0)
			rear=-1;
		cQueue[++rear] = value;
		if(front==-1)
			front=0;
	}
}
void deQueue()
{
	if(front==-1 && rear==-1)
		cout<<"Circular Queue is empty"<<endl;
	else
	{
		cout<<"Deleted element : "<<cQueue[front++]<<endl;
		if(front==n)
			front=0;
		else if(front-1==rear)
			front=rear=-1;
	}
}
void display()
{
	if(front==-1)
		cout<<"Circular Queue is empty"<<endl;
	else
	{
		int i=front;
		cout<<"Circular Queue elements are : ";
		if(front<=rear)
		{
			while(i<=rear)
				cout<<cQueue[i++]<<" ";
				cout<<endl;
		}
		else
		{
			while(i<=n-1)
				cout<<cQueue[i++]<<" ";
			i=0;
			while(i<=rear)
				cout<<cQueue[i++]<<" ";
		}
	}
}
void main()
{
	int choice, value;
	clrscr();
	cout<<"1. Insertion in circular queue"<<endl;
	cout<<"2. Deletion in circular queue"<<endl;
	cout<<"3. Display the circular queue"<<endl;
	cout<<"4. Exit"<<endl;
	do
	{
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter the value to be insert : ";
				cin>>value;
				enQueue(value);
				break;
			case 2:
				deQueue();
				break;
			case 3:
				display();
				break;
			case 4:
				cout<<"Exit"<<endl;
				break;
			default:
				cout<<"Choice is invalid..."<<endl;
		}
	}
	while(choice!=4);
	getch();
}