// Minimum & Maximum element in the array
#include<iostream.h>
#include<conio.h>
void getMinMax(int arr[], int N)
{
	int max = arr[0], min = arr[0];
	for(int i=1; i<N; i++)
	{
		if(max < arr[i])
			max = arr[i];
		if(min > arr[i])
			min = arr[i];
	}
	cout<<"Maximum Value = "<<max<<endl;
	cout<<"Minimum Value = "<<min;
}
void main()
{
	int arr[] = {2, 1, 6, 9, 4, 10, 15, 21};
	int N = 8;
	clrscr();
	getMinMax(arr, N);
	getch();
}