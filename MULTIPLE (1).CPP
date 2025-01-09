// Multiple Inheritance
#include<iostream.h>
#include<conio.h>
#include<string.h>
class Father
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
class Mother
{
	protected:
		char mname[20];
	public:
		void readm()
		{
			cout<<"Enter mother name : ";
			cin>>mname;
		}
		void displaym()
		{
			cout<<"Mother name is "<<mname<<endl;
		}
};
class Child : virtual public Father, virtual public Mother
{
	protected:
		char cname[20];
	public:
		void readc()
		{
			Father::readf();
			Mother::readm();
			cout<<"Enter child name : ";
			cin>>cname;
		}
		void displayc()
		{
			Father::displayf();
			Mother::displaym();
			cout<<"Child name is "<<cname;
		}
};
void main()
{
	Child c1;
	clrscr();
	c1.readc();
	c1.displayc();
	getch();
}

