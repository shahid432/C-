// Age Difference as on today
#include<iostream.h>
#include<conio.h>
void age(int p_date, int p_month, int p_year, int b_date, int b_month, int b_year)
{
	int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(b_date>p_date)
	{
		p_date = p_date + month[b_month-1];
		p_month = p_month - 1;
	}
	if(b_month>p_month)
	{
		p_year = p_year - 1;
		p_month = p_month + 12;
	}
	int f_date = p_date - b_date;
	int f_month = p_month - b_month;
	int f_year = p_year - b_year;
	cout<<"Present Age : "<<f_year<<" year "<<f_month<<" month "<<f_date<<" days.";
}
void main()
{
	int p_date = 5;
	int p_month = 1;
	int p_year = 2025;
	int b_date = 22;
	int b_month = 7;
	int b_year = 2000;
	clrscr();
	age(p_date, p_month, p_year, b_date, b_month, b_year);
	getch();
}