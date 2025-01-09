/* Program to swap the numbers without using the third variable */
#include<iostream.h>
#include<conio.h>
void main()
{
	// Data declaration or identifier
	int n1, n2;
	clrscr();
	// Take two numbers from the user
	cout<<"Enter first number : ";
	cin>>n1;
	cout<<"Enter second number : ";
	cin>>n2;
	n1 = n1+n2;
	n2 = n1-n2;
	n1 = n1-n2;
	cout<<"After swapping numbers would be "<<n1<<" and "<<n2;
	getch();
}