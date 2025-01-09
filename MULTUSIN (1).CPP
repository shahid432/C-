/* Program to multiply two complex number using class */
#include<iostream.h>
#include<conio.h>
class Complex
{
	private:
		int real, img;
	public:
		void Read()
		{
			cout<<"Enter real and imaginary part : ";
			cin>>real>>img;
		}
		void multc(Complex c1, Complex c2);
		void Display()
		{
			cout<<"real + i img = "<<real<<" + i "<<img<<endl;
		}
};
void Complex :: multc(Complex c1, Complex c2)
{
	real = c1.real * c2.real - c1.img * c2.img;
	img = c1.img * c2.real + c1.real * c2.img;
}
void main()
{
	Complex c1, c2, c3;
	clrscr();
	c1.Read();
	c2.Read();
	c3.multc(c1, c2);
	c1.Display();
	c2.Display();
	c3.Display();
	getch();
}