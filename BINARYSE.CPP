// Binary Search
#include<iostream.h>
#include<conio.h>
int binarySearch(int arr[], int x, int low, int high)
{
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(x==arr[mid])
			return mid;
		if(x>arr[mid])
			low=mid+1;
		else
			high=mid-1;
	}
	return -1;
}
void main()
{
	int arr[] = {3, 4, 5, 6, 7, 8, 9};
	int x = 4;
	int n = sizeof(arr)/sizeof(arr[0]);
	clrscr();
	int result = binarySearch(arr, x, 0, n-1);
	if(result==-1)
		cout<<"Key not found";
	else
		cout<<"Element is found at index "<<result;
	getch();
}