// Prime number series
#include<iostream.h>
#include<conio.h>
enum bool {false, true};
void main()
{
	int low, high, i;
	bool is_prime = true;
	clrscr();
	cout<<"Enter two numbers : ";
	cin>>low>>high;
	cout<<"Prime numbers between "<<low<<" and "<<high<<" are : "<<endl;
	while(low<high)
	{
		is_prime = true;
		if(low==0 || low==1)
		{
			is_prime = false;
		}
		for(i=2; i<=low/2; ++i)
		{
			if(low%i==0)
			{
				is_prime = false;
				break;
			}
		}
		if(is_prime)
			cout<<low<<" ";
		++low;
	}
	getch();
}