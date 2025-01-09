/* Program to add salary of parents using friend function */
#include<iostream.h>
#include<conio.h>
class Sumsal
{
	private:
		long fatsal, motsal, sumsal;
	public:
		void Read()
		{
			cout<<"Enter salary of your father and mother : ";
			cin>>fatsal>>motsal;
		}
		int Display()
		{
			return sumsal;
		}
		friend Sumsal operator + (Sumsal fs, Sumsal ms)
		{
			Sumsal ss;
			ss.sumsal = fs.fatsal + ms.motsal;
			return ss;
		}
};
void main()
{
	Sumsal fs, ms, ss;
	clrscr();
	ss.Read();
	cout<<"Total salary of parents will be ";
	ss = fs + ms;
	ss.Display();
	getch();
}