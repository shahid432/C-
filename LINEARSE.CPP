// Linear Search
#include<iostream.h>
#include<conio.h>
int linearSearch(int arr[], int n, int key)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}
void main()
{
	int arr[] = {10, 50, 30, 70, 80, 60, 20, 90, 40};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 30;
	clrscr();
	int i = linearSearch(arr, n, key);
	if(i==-1)
		cout<<"Key not found in the array.";
	else
		cout<<"Key found at index "<<i;
	getch();
}