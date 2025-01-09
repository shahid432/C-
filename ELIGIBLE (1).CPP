/* Program to check whether the person is eligible to vote or not */
#include<iostream.h>
#include<conio.h>
void main()
{
	// Data declaration or identifier
	int year;
	clrscr();
	// Take input from the user
	cout<<"Enter your age : ";
	cin>>year;
	// Use if-else statement to check the eligibility to vote
	if(year>=18)
	{
		cout<<"Your age is "<<year<<" and you are eligible to vote.";
	}
	else
	{
		cout<<"Sorry, you are not eligible to vote.";
	}
	getch();
}