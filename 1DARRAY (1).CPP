/* Program to read and write array elements */
#include<iostream.h>
#include<conio.h>
void main()
{
	int n, a[20], i;
	clrscr();
	cout<<"Enter the size of the array : ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"Enter "<<i+1<<" element ";
		cin>>a[i];
	}
	for(i=0; i<n; i++)
	{
		cout<<"Array elements are : "<<a[i]<<endl;
	}
	getch();
}