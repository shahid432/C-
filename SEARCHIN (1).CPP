// Implementation of searching of element from array
#include<iostream.h>
#include<conio.h>
void main()
{
	int a[20], item, size;
	clrscr();
	cout<<"Enter the size of the array : ";
	cin>>size;
	for(int i=0; i<size; i++)
	{
		cout<<"Enter "<<i+1<<" element : ";
		cin>>a[i];
	}
	cout<<"Enter element to search : ";
	cin>>item;
	for(int j=0; j<size; j++)
	{
		if(a[j] == item)
		{
			cout<<"Item is present in the array.";
		}
		else
		{
			continue;
		}
	}
	getch();
}