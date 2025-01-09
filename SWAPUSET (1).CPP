/* Program to swap two numbers using the third variable */
#include<iostream.h>
#include<conio.h>
void main()
{
	// Data declaration or variables
	int n1, n2, c;
	clrscr();
	// Take two numbers from the user
	cout<<"Enter two numbers you want to swap : ";
	cin>>n1>>n2;
	// Process
	c = n1;
	n1 = n2;
	n2 = c;
	// Print the result
	cout<<"After swapping numbers will be "<<n1<<" and "<<n2;
	getch();
}