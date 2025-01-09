/* Program to add, multiply, divide two complex number using class */
#include<iostream.h>
#include<conio.h>
class Complex
{
	private:
		float real, img;
	public:
		void Read()
		{
			cout<<"Enter real & imaginary values : ";
			cin>>real>>img;
		}
		void Addc(Complex c1, Complex c2);
		void Multc(Complex c1, Complex c2);
		void Divc(Complex c1, Complex c2);
		void Display()
		{
			cout<<"real + i img = "<<real<<" + i "<<img<<endl;
		}
};
void Complex :: Addc(Complex c1, Complex c2)
{
	real = c1.real + c2.real;
	img = c1.img + c2.img;
}
void Complex :: Multc(Complex c1, Complex c2)
{
	real = c1.real * c2.real - c1.img * c2.img;
	img = c1.img * c2.real + c1.real * c2.img;
}
void Complex :: Divc(Complex c1, Complex c2)
{
	real = (c1.real*c2.real+c1.img*c2.img)/(c2.real*c2.real+c2.img*c2.img);
	img = (c2.real*c1.img-c1.real*c2.img)/(c2.real*c2.real+c2.img*c2.img);
}
void main()
{
	Complex c1, c2, c3, c4, c5;
	clrscr();
	c1.Read();
	c2.Read();
	c3.Addc(c1, c2);
	c4.Multc(c1, c2);
	c5.Divc(c1, c2);
	c1.Display();
	c2.Display();
	c3.Display();
	c4.Display();
	c5.Display();
	getch();
}