#include<iostream.h>
#include<conio.h>
class A1
{
	public:
	A()
	{
		cout<<"Constructor of the base class A1 \n";
	}
};
class A2
{
	public:
	A2()
	{
		cout<<"Constructor of the base class A2 \n";
	}
};
class S : public A1, virtual A2
{
	public:
	S(): A1(), A2()
	{
		cout<<"Constructor of the derived class S \n";
	}
};

void main()
{
	clrscr();
	S obj;
	getch();
}


