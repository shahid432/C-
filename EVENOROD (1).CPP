/* Program to check whether the number is even or odd */
#include<iostream.h>
#include<conio.h>
void main()
{
	// Data declaration or identifier
	long num;
	clrscr();
	// Take number from the user
	cout<<"Enter the number : ";
	cin>>num;
	// Check number for even or odd
	if(num%2==0)
	{
		cout<<num<<" is even.";
	}
	else
	{
		cout<<num<<" is odd.";
	}
	getch();
}