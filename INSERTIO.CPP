// Insertion sort
#include<iostream.h>
#include<conio.h>
void PrintArray(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void InsertionSort(int arr[], int size)
{
	for(int step=1; step<size; step++)
	{
		int key = arr[step];
		int j = step-1;
		while(j>=0 && key < arr[j])
		{
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = key;
	}
}
void main()
{
	int arr[] = {9, 5, 1, 4, 3};
	int size = sizeof(arr)/sizeof(arr[0]);
	clrscr();
	InsertionSort(arr, size);
	cout<<"Sorted array in ascending order : ";
	PrintArray(arr, size);
	getch();
}