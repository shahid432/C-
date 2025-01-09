// Implementation of traversal of elements of an array
#include<iostream.h>
#include<conio.h>
void main()
{
	int a[20], size, item;
	clrscr();
	cout<<"Enter the size of the array : ";
	cin>>size;
	for(int i=0; i<size; i++)
	{
		cout<<"Enter "<<i+1<<" element : ";
		cin>>a[i];
	}
	cout<<"Enter element which you want to traverse from the array : ";
	cin>>item;
	for(int j=0; j<item; j++)
	{
		if(a[j]==item)
		{
			cout<<"Item is at "<<j+1<<" position." ;
		}
		else
		{
			continue;
		}
	}
	getch();
}