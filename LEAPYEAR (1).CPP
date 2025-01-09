/* Program to check whether the year is a leap year or not */
#include<iostream.h>
#include<conio.h>
void main()
{
	// Data declaration or identifier
	int year;
	clrscr();
	// Take input from the user
	cout<<"Enter the year(must be four-digit) : ";
	cin>>year;
	if(year%100==0 && year%400==0)
	{
		cout<<year<<" is a leap year.";
	}
	else if(year%100!=0 && year%4==0)
	{
		cout<<year<<" is a leap year.";
	}
	else
	{
		cout<<year<<" is not a leap year.";
	}
	getch();
}