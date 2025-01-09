/* Program to implement virtual function */
#include<iostream.h>
#include<string.h>
#include<conio.h>
class Father
{
	protected:
		char *fname;
	public:
		Father()
		{
			fname = NULL;
		}
		Father(char *fi)
		{
			strcpy(fname, fi);
		}
		virtual void show()
		{
			cout<<fname;
		}
};
class Son : public Father
{
	protected:
		char *sname;
	public:
		Son()
		{
			sname = NULL;
		}
		Son(char *fi, char *si) : Father(fi)
		{
			strcpy(sname, si);
		}
		virtual void show()
		{
			// Father::show();
			cout<<sname;
		}
};
class Gson : public Son
{
	protected:
		char *gsname;
	public:
		Gson()
		{
			gsname = NULL;
		}
		Gson(char *fi, char *si, char *gsi) : Son(fi, si)
		{
			strcpy(gsname, gsi);
		}
		void show()
		{
			cout<<gsname;
		}
};
void main()
{
	Father *p;
	clrscr();
	Father fo("Chagan");
	Son so("Chagan", "Magan");
	Gson gso("Lagan", "Chagan", "Magan");
	// p = &fo;
	// p -> show();
	// delete p;
	// p = &so;
	// p -> show();
	// delete p;
	p = &gso;
	p -> show();
	delete p;
	getch();
}
