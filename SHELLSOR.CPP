// Shell Sort
#include<iostream.h>
#include<conio.h>
void ShellSort(int arr[], int n)
{
	for(int interval=n/2; interval>0; interval/=2)
	{
		for(int i=interval; i<n; i+=1)
		{
			int temp = arr[i];
			for(int j=i; j>=interval && arr[j-interval]>temp; j-=interval)
			{
				arr[j] = arr[j-interval];
			}
			arr[j] = temp;
		}
	}
}
void PrintArray(int arr[], int size)
{
	for(int i=0; i<size; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void main()
{
	int arr[] = {9, 8, 3, 7, 5, 6, 4, 1};
	int size = sizeof(arr)/sizeof(arr[0]);
	clrscr();
	ShellSort(arr, size);
	cout<<"Sorted array : ";
	PrintArray(arr, size);
	getch();
}