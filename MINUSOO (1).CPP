/* Program to implement (-) Operator Overloading */
#include<iostream.h>
#include<conio.h>
class Complex
{
	private:
		float real, img;
	public:
		Complex()
		{
			real = img = 0;
		}
		void Read()
		{
			cout<<"Enter real and imaginary part : ";
			cin>>real>>img;
		}
		void Display()
		{
			cout<<"Real + i Imaginary = "<<real<<"+ i ("<<img<<")"<<endl;
		}
		friend void operator -(Complex &c1)
		{
			c1.real = -c1.real;
			c1.img = -c1.img;
		}
};
void main()
{
	Complex c1;
	clrscr();
	cout<<"Enter complex number : "<<endl;
	c1.Read();
	cout<<"After overloading (-) operator : ";
	-c1;
	c1.Display();
	getch();
}