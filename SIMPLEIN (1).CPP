/* Program to find the simple interest */
#include<iostream.h>
#include<conio.h>
void main()
{
	// Data declaration or identifier
	float p, r, t, si;
	clrscr();
	// Ask the user to input the principal amount, rate and time(in years)
	cout<<"Enter the principal amount : ";
	cin>>p;
	cout<<"Enter the rate : ";
	cin>>r;
	cout<<"Enter the time(in years) : ";
	cin>>t;
	// Calculate the simple interest by (p*r*t)/100
	si = (p*r*t)/100;
	// Print the simple interest
	cout<<"Simple interest after "<<t<<" years will be "<<si;
	getch();
}