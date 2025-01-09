/* Program to implement relational operator to compare 2 objects using
operator overloading */
#include<iostream.h>
enum boolean{FALSE, TRUE};
#include<conio.h>
class Index
{
	private:
		int value;
	public:
		Index()
		{
			value = 0;
		}
		Index(int val)
		{
			value = val;
		}
		int GetIndex()
		{
			return value;
		}
		boolean operator <(Index idx)
		{
			return value<idx.value ? TRUE:FALSE;
		}
};
void main()
{
	Index idx1(10), idx2(5);
	clrscr();
	cout<<"Index1 = "<<idx1.GetIndex()<<endl;
	cout<<"Index2 = "<<idx2.GetIndex()<<endl;
	if (idx1 < idx2)
		cout<<"Index1 is less than Index2";
	else
		cout<<"Index2 is less than Index1";
	getch();
}