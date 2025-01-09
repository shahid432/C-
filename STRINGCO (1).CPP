/* Program to implement string concatenation by (+) operator overloading */
#include<iostream.h>
#include<string.h>
#include<conio.h>
class String
{
	private:
		char str[30];
	public:
		String()
		{
			strcpy(str, " ");
		}
		String(char *s)
		{
			strcpy(str, s);
		}
		void Read()
		{
			cout<<"Enter any string name : ";
			cin>>str;
		}
		void Display()
		{
			cout<<str;
		}
		String operator +(String s)
		{
			String t = str;
			strcat(t.str, s.str);
			return t;
		}
};
void main()
{
	String s1, s2, s3;
	clrscr();
	s1.Read();
	s2.Read();
	cout<<"Resultant string concatenation is ";
	s3 = s1 + s2;
	s3.Display();
	getch();
}