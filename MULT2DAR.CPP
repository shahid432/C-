// Matrix Multiplication
#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
	clrscr();
	cout<<"Enter rows and columns of first matrix : ";
	cin>>r1>>c1;
	cout<<"Enter rows and columns of second matrix : ";
	cin>>r2>>c2;
	while(c1!=r2)
	{
		cout<<"Column of 1st matrix should be equal to row of 2nd matrix.";
	}
	cout<<"Enter elements of 1st matrix : "<<endl;
	for(i=0; i<r1; ++i)
		for(j=0; j<c1; ++j)
		{
			cout<<"Enter element a"<<i+1<<j+1<<" : ";
			cin>>a[i][j];
		}
	cout<<"Enter elements of 2nd matrix : "<<endl;
	for(i=0; i<r2; ++i)
		for(j=0; j<c2; ++j)
		{
			cout<<"Enter element b"<<i+1<<j+1<<" : ";
			cin>>b[i][j];
		}
	for(i=0; i<r1; i++)
		for(j=0; j<c2; j++)
		{
			mult[i][j] = 0;
		}
	for(i=0; i<r1; ++i)
		for(j=0; j<c2; ++j)
			for(k=0; k<c1; ++k)
			{
				mult[i][j] += a[i][k] * b[k][j];
			}
	cout<<"Multiplication of a and b will be : "<<endl;
	for(i=0; i<r1; ++i)
		for(j=0; j<c2; ++j)
		{
			cout<<" "<<mult[i][j];
			if(j==c2-1)
				cout<<endl;
		}
	getch();
}