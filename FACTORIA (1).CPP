/* Program to find the factorial of a number */
#include<iostream.h>
#include<conio.h>

void main()
{
	// Variable Declaration
	int fact=1, n, i;
	clrscr();
	// Ask user to input the number to find its factorial
	cout<<"Enter the number whose factorial you need to know : ";
	cin>>n;
	// Use loops for iteration
	for(i=1; i<=n; i++)
	{
		fact = fact * i;
	}
	cout<<"Factorial of "<<n<<" is "<<fact;
	getch();
}