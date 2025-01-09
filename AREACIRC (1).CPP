/* Program to find the area of the circle */
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	// Data declaration or identifier
	int r;
	float pi=3.14, area;
	clrscr();
	// Ask user to input the radius of circle
	cout<<"Enter the radius of the circle : ";
	cin>>r;
	// Calculate the area of the circle
	area = pi * r * r;
	// Print the output
	cout<<"Area of the circle whose radius "<<r<<" is "<<area;
	getch();
}
