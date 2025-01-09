/* Program to print the prime number series */
#include<iostream.h>
#include<conio.h>
int checkprime(int num)
{
	if(num==1)
		return 0;
	for(int i=2; i<num; i++)
	{
		if(num%i == 0)
			continue;
	}
	return i;
}
void main()
{
	int num;
	clrscr();
	cout<<"Enter the number till the prime no. series you want ";
	cin>>num;
	for(int i=1; i<=num; i++)
	{
		if (checkprime(i));
			cout<<i<<", ";
	}
	getch();
}