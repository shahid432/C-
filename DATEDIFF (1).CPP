/* Program to find date difference as on today */
#include<iostream.h>
#include<conio.h>
struct Date
{
	int d, m, y;
};
const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int countLeapYears(Date d)
{
	int years = d.y;
	if(d.m <= 2)
		years--;
	return years/4 - years/100 + years/400;
}
int getDifference(Date dt1, Date dt2)
{
	long int n1 = dt1.y * 365 + dt1.d;
	for(int i=0; i<dt1.m - 1; i++)
		n1 += monthDays[i];
	n1 += countLeapYears(dt1);
	long int n2 = dt2.y * 365 + dt2.d;
	for(int j=0; j<dt2.m-1; j++)
		n2 += monthDays[j];
	n2 += countLeapYears(dt2);
	return (n2-n1);
}
void main()
{
	Date dt1 = {1, 1, 2024};
	Date dt2 = {1, 11, 2024};
	clrscr();
	cout<<"Difference between two dates is "<<getDifference(dt1, dt2);
	getch();
}