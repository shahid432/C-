/* Program to satisfy the identity (a+b)^2 = a^2+2ab+b^2 */
#include<iostream.h>
#include<conio.h>
void main()
{
	// Data declaration or identifier
	int a, b, r1, r2;
	clrscr();
	// Take input from the user
	cout<<"Enter the value of a and b : ";
	cin>>a>>b;
	r1 = (a+b)*(a+b);
	r2 = a*a+2*a*b+b*b;
	if(r1 == r2)
	{
		cout<<"Since r1=r2 then we say that (a+b)^2 = a^2+2ab+b^2";
	}
	getch();
}