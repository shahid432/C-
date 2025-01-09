/* Program to implement unary pre- & post-increment(++), (--) using friend function */
#include<iostream.h>
#include<conio.h>
class Increment
{
	private:
		int i;
	public:
		Increment()
		{
			i=0;
		}
		int Read()
		{
			return i;
		}
		friend void operator ++(Increment &i1)
		{
			++i1.i;
		}
		friend void operator ++(Increment &i1, int)
		{
			i1.i++;
		}
		friend void operator --(Increment &i1)
		{
			--i1.i;
		}
		friend void operator --(Increment &i1, int)
		{
			i1.i--;
		}
};
void main()
{
	Increment i1;
	clrscr();
	cout<<"Initial value of i1 = "<<i1.Read()<<endl;
	++i1;
	cout<<"Pre-incremental value of i using friend function = "<<i1.Read()<<endl;
	i1++;
	cout<<"Post-incremental value of i using friend function = "<<i1.Read()<<endl;
	cout<<"Now i1 changes to "<<i1.Read()<<endl;
	--i1;
	cout<<"Pre-decremental value of i using friend function = "<<i1.Read()<<endl;
	i1--;
	cout<<"Post-decremental value of i using friend function = "<<i1.Read();
	getch();
}