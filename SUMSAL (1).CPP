/* Program to add parents salary */
#include<iostream.h>
#include<conio.h>
void main()
{
	// Variable Declaration or identifier
	long int fat_sal, mot_sal, sum_sal;
	clrscr();
	// Ask user to input the salary
	cout<<"Enter your father's salary : ";
	cin>>fat_sal;
	cout<<"Enter your mother's salary : ";
	cin>>mot_sal;
	// Sum the salaries
	sum_sal = fat_sal + mot_sal;
	// Print the output
	cout<<"Sum of your parent's salary is "<<sum_sal;
	getch();
}