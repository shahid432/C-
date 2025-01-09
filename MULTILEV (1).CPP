// Multilevel Inheritance
#include<iostream.h>
#include<conio.h>
#include<string.h>
class Parent
{
	protected:
		char fname[20];
	public:
		void readf()
		{
			cout<<"Enter father name : ";
			cin>>fname;
		}
		void displayf()
		{
			cout<<"Father name is "<<fname<<endl;
		}
};
class Child : public Parent
{
	protected:
		char cname[20];
	public:
		void readc()
		{
			cout<<"Enter child name : ";
			cin>>cname;
		}
		void displayc()
		{
			cout<<"Child name is "<<cname<<endl;
		}
};
class Gchild : public Child
{
	protected:
		char gcname[20];
	public:
		void readgc()
		{
			Parent::readf();
			Child::readc();
			cout<<"Enter grandchild name : ";
			cin>>gcname;
		}
		void displaygc()
		{
			Parent::displayf();
			Child::displayc();
			cout<<"Grandchild name is "<<gcname;
		}
};
void main()
{
	Gchild g1;
	clrscr();
	g1.readgc();
	g1.displaygc();
	getch();
}

