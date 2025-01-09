// Quick Sort
#include<iostream.h>
#include<conio.h>
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void PrintArray(int arr[], int size)
{
	for(int i=0; i<size; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
int Partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low-1);
	for(int j=low; j<high; j++)
	{
		if(arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return (i+1);
}
void QuickSort(int arr[], int low, int high)
{
	if(low < high)
	{
		int pi = Partition(arr, low, high);
		QuickSort(arr, low, pi-1);
		QuickSort(arr, pi+1, high);
	}
}
void main()
{
	int arr[] = {8, 7, 6, 1, 0, 9, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	clrscr();
	cout<<"Unsorted Array : ";
	PrintArray(arr, n);
	QuickSort(arr, 0, n-1);
	cout<<"Sorted array in ascending order : ";
	PrintArray(arr, n);
	getch();
}