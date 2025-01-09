/* Program to check whether the number is armstrong or not */
#include<iostream.h>
#include<conio.h>
void main()
{
	int a, b, c, d, num, sum;
	clrscr();
	cout<<"Enter number to check whether it is armstrong number or not : ";
	cin>>num;
	a = num%100;
	b = num/100;
	c = a%10;
	d = a/10;
	sum = (b*b*b) + (d*d*d) + (c*c*c);
	if(num==sum)
	{
		cout<<num<<" is an armstrong number.";
	}
	else
	{
		cout<<num<<" is not an armstrong number.";
	}
	getch();
}