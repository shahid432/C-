/* Program to swap two values with call by value, call by reference and
call by address */
#include<iostream.h>
#include<conio.h>
void swap(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	cout<<"Values after swapping : "<<a<<b<<endl;
}
void swap(float *x, float *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
	cout<<"Values after swapping : "<<*x<<*y<<endl;
}
void swap(float &x, float &y)
{
	x = x + y;
	y = x - y;
	x = x - y;
	cout<<"Values after swapping : "<<&x<<&y<<endl;
}
void main()
{
	int a=2, b=3;
	float x=1.2, y=2.3;
	clrscr();
	swap(a, b);
	swap(&x, &y);
	swap(x, y);
	getch();
}