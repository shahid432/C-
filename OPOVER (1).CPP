/* Program to overload the unary operator */
#include<iostream.h>
#include<conio.h>
class Counter
{
	private:
		int c;
	public:
		Counter()
		{
			c=0;
			cout<<c;
		}
		void Counter ++()
		{
			++c;
			cout<<"Value of counter incremented to "<<c;
		}
};
void main()
{
	int c;
	clrscr();
	Counter();
	getch();
}

