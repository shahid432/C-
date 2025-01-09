/* Program to print the fibonacci series of the number */
#include<iostream.h>
#include<conio.h>
void main()
{
	// Variable Declaration
	int a=0, b=1, c=0, num, i;
	clrscr();
	// Take input from the user
	cout<<"Enter the number : ";
	cin>>num;
	// Process
	cout<<"Fibonacci series : ";
	for(i=1; i<=num; i++)
	{
		if(i==1)
		{	cout<<a<<", ";
		}
		if(i==2)
		{	cout<<b<<", ";
		}
		c = a + b;
		a = b;
		b = c;
		cout<<c<<", ";
	}
	getch();
}