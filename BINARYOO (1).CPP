/* Binary Operator Overloading : +,-,*,/ Complex Number */
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
		Complex operator +(Complex c2)
		{
			Complex t;
			t.real = real + c2.real;
			t.img = img + c2.img;
			return t;
		}
		Complex operator -(Complex c2)
		{
			Complex t;
			t.real = c2.real - real;
			t.img = c2.img - img;
			return t;
		}
		Complex operator *(Complex c2)
		{
			Complex t;
			t.real = real * c2.real - img * c2.img;
			t.img = img * c2.real + real * c2.img;
			return t;
		}
		Complex operator /(Complex c2)
		{
			Complex t;
			float d;
			d = c2.real*c2.real + c2.img*c2.img;
			t.real = (real * c2.real + img * c2.img)/d;
			t.img = (img * c2.real - real * c2.img)/d;
			return t;
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
	c3 = c1 + c2;
	cout<<"Addition of complex numbers are : ";
	c3.Display();
	c4 = c1 - c2;
	cout<<"Subtraction of complex numbers are : ";
	c4.Display();
	c5 = c1 * c2;
	cout<<"Multiplication of complex numbers are : ";
	c5.Display();
	c6 = c1/c2;
	cout<<"Division of complex numbers are : ";
	c6.Display();
	getch();
}