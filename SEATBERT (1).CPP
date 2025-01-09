/* Program to allot the berth of the train */
#include<iostream.h>
#include<conio.h>
class Seat
{
	private:
		int s;
	public:
		void Read()
		{
			cout<<"Enter the seat number (between 1-72): ";
			cin>>s;
		}
		void Display()
		{
			if (s%8==1 || s%8==4)
			cout<<"Your seat type is Lower Berth.";
			else if(s%8==2 || s%8==5)
			cout<<"Your seat type is Middle Berth.";
			else if(s%8==3 || s%8==6)
			cout<<"Your seat type is Upper Berth.";
			else if(s%8==7)
			cout<<"Your seat type is Side Lower Berth.";
			else if(s%8==0)
			cout<<"Your seat type is Side Upper Berth.";
			else
			cout<<"You entered the invalid input.";
		}
};
void main()
{
	Seat s1;
	clrscr();
	s1.Read();
	s1.Display();
	getch();
}