/* Program to implement +,-,*,/ in complex numbers using friend function */
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
			cout<<"Enter real & imaginary part : ";
			cin>>real>>img;
		}
		void Display()
		{
			cout<<"Real + i imaginary = "<<real<<"+ i"<<img<<endl;
		}
		friend Complex operator +(Complex c1, Complex c2)
		{
			Complex c;
			c.real = c1.real + c2.real;
			c.img = c1.img + c2.img;
			return c;
		}
		friend Complex operator -(Complex c1, Complex c2)
		{
			Complex c;
			c.real = c2.real - c1.real;
			c.img = c2.img - c1.img;
			return c;
		}
		friend Complex operator *(Complex c1, Complex c2)
		{
			Complex c;
			c.real = c1.real*c2.real - c1.img*c2.img;
			c.img = c1.img*c2.real + c1.real*c2.img;
			return c;
		}
		friend Complex operator /(Complex c1, Complex c2)
		{
			Complex c;
			float d;
			d = c2.real*c2.real + c2.img*c2.img;
			c.real = (c1.real*c2.real+c1.img*c2.img)/d;
			c.img = (c1.img*c2.real-c1.real*c2.img)/d;
			return c;
		}
};
void main()
{
	Complex c1, c2, c3, c4, c5, c6;
	clrscr();
	cout<<"Enter complex number c1 : "<<endl;
	c1.Read();
	cout<<"Enter complex number c2 : "<<endl;
	c2.Read();
	cout<<"Addition of complex numbers are : ";
	c3 = c1 + c2;
	c3.Display();
	cout<<"Subtraction of complex numbers are : ";
	c4 = c1 - c2;
	c4.Display();
	cout<<"Multiplication of complex numbers are : ";
	c5 = c1 * c2;
	c5.Display();
	cout<<"Division of complex numbers are : ";
	c6 = c1/c2;
	c6.Display();
	getch();
}