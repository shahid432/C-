/* Program to find the greatest and smallest among three numbers */
#include<iostream.h>
#include<conio.h>
void main()
{
	// Data declaration or identifier
	int n1, n2, n3;
	clrscr();
	// Take three numbers from the user
	cout<<"Enter three numbers : ";
	cin>>n1>>n2>>n3;
	// Use if statements to check the relation
	if(n1>n2 && n1>n3)
	{
		cout<<n1<<" is the greatest.";
		{
			if(n2>n3)
			{
				cout<<n3<<" is the smallest.";
			}
		}
	}
	else if(n2>n3 && n2>n1)
	{
		cout<<n2<<" is the greatest.";
		{
			if(n3>n1)
			{
				cout<<n1<<" is the smallest.";
			}
		}
	}
	else
	{
		cout<<n3<<" is the greatest.";
		{
			if(n2>n1)
			{
				cout<<n1<<" is the smallest.";
			}
			else
			{
				cout<<n2<<" is the smallest.";
			}
		}
	}
	getch();
}
