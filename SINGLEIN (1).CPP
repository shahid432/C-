// Single Inheritance
#include<iostream.h>
#include<conio.h>
#include<string.h>
class Parent
{
	protected:
		char fname[20];
	public:
		void Readp()
		{
			cout<<"Enter father name : ";
			cin>>fname;
		}
		void Displayp()
		{
			cout<<"Father name is "<<fname<<endl;
		}
};
class Child : public Parent
{
	protected:
		char cname[20];
	public:
		void Readc()
		{
			Parent::Readp();
			cout<<"Enter child name : ";
			cin>>cname;
		}
		void Displayc()
		{
			Parent::Displayp();
			cout<<"Child name is "<<cname;
		}
};
void main()
{
	Child c1;
	clrscr();
	c1.Readc();
	c1.Displayc();
	getch();
}
