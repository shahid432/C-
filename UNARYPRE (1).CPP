/* Operator Overloading (Unary ++, --) Pre- & Post-Increment */
#include<iostream.h>
#include<conio.h>
class Increment
{
	private:
		int i;
	public:
		Increment()
		{
			i=1;
		}
		int Read()
		{
			return i;
		}
		void operator ++()
		{
			++i;
		}
		void operator ++(int)
		{
			i++;
		}
		void operator --()
		{
			--i;
		}
		void operator --(int)
		{
			i--;
		}
};
void main()
{
	Increment i1;
	clrscr();
	cout<<"Initial i1 value = "<<i1.Read()<<endl;
	++i1;
	cout<<"Pre-incremental(++) value of i1 = "<<i1.Read()<<endl;
	i1++;
	cout<<"Post-incremental(++) value of i1 = "<<i1.Read()<<endl;
	cout<<"Now i1 value changes to "<<i1.Read()<<endl;
	--i1;
	cout<<"Pre-decremental(--) value of i1 = "<<i1.Read()<<endl;
	i1--;
	cout<<"Post-decremantal(--) value of i1 = "<<i1.Read();
	getch();

}