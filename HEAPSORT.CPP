// Heap Sort
#include<iostream.h>
#include<conio.h>
void Swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void Heapify(int arr[], int n, int i)
{
	int largest = i;
	int left = 2*i+1;
	int right = 2*i+2;
	if(left<n && arr[left]>arr[largest])
		largest = left;
	if(right<n && arr[right]>arr[largest])
		largest = right;
	if(largest!=i)
	{
		Swap(&arr[i], &arr[largest]);
		Heapify(arr, n, largest);
	}
}
void HeapSort(int arr[], int n)
{
	for(int j=n/2-1; j>=0; j--)
		Heapify(arr, n, j);
	for(int i=n-1; i>=0; i--)
	{
		Swap(&arr[0], &arr[i]);
		Heapify(arr, i, 0);
	}
}
void PrintArray(int arr[], int n)
{
	for(int i=0; i<n; ++i)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void main()
{
	int arr[] = {1, 12, 9, 5, 6, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	clrscr();
	HeapSort(arr, n);
	cout<<"Sorted array is ";
	PrintArray(arr, n);
	getch();
}