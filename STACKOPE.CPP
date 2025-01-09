// Stack operations
#include<iostream.h>
#include<conio.h>
int stack[50], n=50, top=-1;
void push(int val)
{
	if(top>=n-1)
		cout<<"Stack Overflow"<<endl;
	else
	{
		top=top+1;
		stack[top]=val;
	}
}
void pop()
{
	if(top<=-1)
		cout<<"Stack Underflow"<<endl;
	else
	{
		cout<<"The popped element is "<<stack[top]<<endl;
		top=top-1;
	}
}
void display()
{
	if(top>=0)
	{
		cout<<"Stack elements are : ";
		for(int i=top; i>=0; i--)
			cout<<stack[i]<<" ";
			cout<<endl;
	}
	else
		cout<<"Stack is empty";
}
void main()
{
	int ch, val;
	clrscr();
	cout<<"1. Push operation"<<endl;
	cout<<"2. Pop operation"<<endl;
	cout<<"3. Display stack"<<endl;
	cout<<"4. Exit"<<endl;
	do
	{
		cout<<"Enter choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				cout<<"Enter value to be push : ";
				cin>>val;
				push(val);
				display();
				break;
			}
			case 2:
			{
				pop();
				display();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				cout<<"Exit"<<endl;
				break;
			}
			default:
			{
				cout<<"Choice is invalid..."<<endl;
			}
		}
	}
	while(ch!=4);
	getch();
}