/* Program to find sum of N numbers without using array */
#include<iostream.h>
#include<conio.h>
void main()
{
	int num, t, sum=0;
	clrscr();
	cout<<"Enter number of elements : ";
	cin>>num;
	for(int i=0; i<num; i++)
	{
		cout<<"Enter "<<i+1<<" element : ";
		cin>>t;
		sum = sum + t;
	}
	cout<<"Sum of all numbers entered by you is "<<sum;
	getch();
}
