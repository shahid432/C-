// Transpose of Matrix
#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10], transpose[10][10], r, c, i, j;
	clrscr();
	cout<<"Enter rows and columns of matrix : ";
	cin>>r>>c;
	cout<<"Enter elements of the matrix : "<<endl;
	for(i=0; i<r; ++i)
	{
		for(j=0; j<c; ++j)
		{
			cout<<"Enter element a"<<i+1<<j+1<<" : ";
			cin>>a[i][j];
		}
	}
	cout<<"Entered Matrix : "<<endl;
	for(i=0; i<r; ++i)
	{
		for(j=0; j<c; ++j)
		{
			cout<<" "<<a[i][j];
			if(j==c-1)
				cout<<endl;
		}
	}
	for(i=0; i<r; ++i)
		for(j=0; j<c; ++j)
		{
			transpose[j][i] = a[i][j];
		}
	cout<<"Transpose of matrix will be : "<<endl;
	for(i=0; i<c; ++i)
		for(j=0; j<r; ++j)
		{
			cout<<" "<<transpose[i][j];
			if(j==r-1)
				cout<<endl;
		}
	getch();
}