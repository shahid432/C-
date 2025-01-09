/* Program to print the pattern :
1
1 2 3
1 2 3 4 5
*/

#include<iostream.h>
#include<conio.h>

void main()
{
	// Variables declaration
	int i, j;
	clrscr();
	// Using loop
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=2*i-1; j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	getch();
}