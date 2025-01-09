
#include<iostream.h>
#include<conio.h>

class GrandFather
{
    protected :
	char name[10],sname[10];
    public :

	void Read()
	{
	    cout<<"Enter Full Name :";
	    cin>>name>>sname;
	}

	void Display()
	{
	    cout<<name<<sname<<endl;
	}
};

class Father
{
    protected :
	char fname[10],fsname[10];
    public :

	void Read1()
	{
	    cout<<"Enter Father's Full Name :";
	    cin>>fname>>fsname;
	}

	void Display1()
	{
	    cout<<fname<<fsname;
	}
};
void main()
{
	clrscr();
	GrandFather g;
	g.Read();
	g.Display();
	Father g1;
	g1.Read1();
	g1.Display1();
	getch();
}

