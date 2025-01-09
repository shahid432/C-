// Deletion of element from the array
#include<iostream.h>
#include<conio.h>
void Read(int a[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<"Enter "<<i+1<<" element : ";
		cin>>a[i];
	}
}
void Display(int a[], int size)
{
	for(int i=0; i<size-1; i++)
	{
		cout<<"Element at position "<<i+1<<" is "<<a[i]<<endl;
	}
}
int Search(int a[], int size, int item)
{
	int pos;
	for(int i=0; i<size; i++)
	{
		if(item == a[i])
		{
			pos = i+1;
			break;
		}
	}
	return pos;
}
void Delete(int a[], int size, int item)
{
	int pos;
	pos = Search(a, size, item);
	if(pos==0)
		cout<<"Element not found to delete.";
	else
	{
		for(int i=pos-1; i<size-1; i++)
			a[i] = a[i+1];
	}
}
void main()
{
	int a[10], size, item;
	clrscr();
	cout<<"Enter the size of the array : ";
	cin>>size;
	Read(a, size);
	cout<<"Enter the element to delete : ";
	cin>>item;
	Delete(a, size, item);
	Display(a, size);
	getch();
}