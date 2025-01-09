// Selection Sort
#include<iostream.h>
#include<conio.h>
void SelectionSort(int arr[], int n)
{
	int i, j;
	int minIndex;
	int temp;
	for(i=0; i<n-1; i++)
	{
		minIndex = i;
		for(j=i+1; j<n; j++)
		{
			if(arr[j]<arr[minIndex])
			{
				minIndex=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[minIndex];
		arr[minIndex]=temp;
	}
}
void main()
{
	int arr[] = {17, 34, 25, 49, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	clrscr();
	cout<<"Original Array : ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	SelectionSort(arr, n);
	cout<<"Sorted Array : ";
	for(int j=0; j<n; j++)
	{
		cout<<arr[j]<<" ";
	}
	cout<<endl;
	getch();
}
