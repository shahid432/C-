/* Program to find the area of the triangle */
#include<iostream.h>
#include<conio.h>
void main()
{
	// Data declaration or identifier
	int b, h;
	float area;
	clrscr();
	// Ask the user to input the base and height of the triangle
	cout<<"Enter the base and height of the triangle : ";
	cin>>b>>h;
	// Area of triangle is 0.5*b*h
	area = 1/2 * b * h;
	// Print the output
	cout<<"Area of the triangle is "<<area;
	getch();
}