// Hierarchial Inheritance
#include<iostream.h>
#include<conio.h>
#include<string.h>
class Vehicle
{
	protected:
		int wheel;
	public:
		void read1()
		{
			cout<<"Enter Vehicle is 2-, 3- or 4-wheeler? ";
			cin>>wheel;
		}
		void display1()
		{
			cout<<"Vehicle wheels are "<<wheel<<endl;
		}
};
class TwoW : public Vehicle
{
	protected:
		char twname[20];
	public:
		void read2()
		{
			Vehicle::read1();
			cout<<"Enter two-wheel vehicle name : ";
			cin>>twname;
		}
		void display2()
		{
			Vehicle::display1();
			cout<<"Two-wheeler vehicle is "<<twname<<endl;
		}
};
class ThreeW : public Vehicle
{
	protected:
		char thname[20];
	public:
		void read3()
		{
			Vehicle::read1();
			cout<<"Enter three-wheel vehicle name : ";
			cin>>thname;
		}
		void display3()
		{
			Vehicle::display1();
			cout<<"Three-wheeler vehicle is "<<thname<<endl;
		}
};
class FourW : public Vehicle
{
	protected:
		char foname[20];
	public:
		void read4()
		{
			Vehicle::read1();
			cout<<"Enter four-wheel vehicle name : ";
			cin>>foname;
		}
		void display4()
		{
			Vehicle::display1();
			cout<<"Four-wheeler vehicle is "<<foname;
		}
};
void main()
{
	int wheel;
	TwoW w1; ThreeW w2; FourW w3;
	clrscr();
	cout<<"Enter number of wheels of the vehicle : ";
	cin>>wheel;
	if(wheel == 2)
	{
		w1.read2();
		w1.display2();
	}
	else if(wheel == 3)
	{
		w2.read3();
		w2.display3();
	}
	else if(wheel == 4)
	{
		w3.read4();
		w3.display4();
	}
	else
	{
		cout<<"Enter wheel number 2, 3 or 4 only.";
	}
	getch();
}
