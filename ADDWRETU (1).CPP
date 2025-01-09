/* Program to add two complex number using class and return object from function */
#include<iostream.h>
#include<conio.h>
class Complex
{
	int real, img;
	public:
		void Read()
		{
			cout<<"Enter real and imaginary parts : ";
			cin>>real>>img;
		}
		Complex Addc1(Complex c);
		void Display()
		{
			cout<<"real + i img = "<<real<<" + i "<<img<<endl;
		}
};
Complex Complex :: Addc1(Complex c)
{
	Complex t;
	t.real = c.real + real;
	t.img = c.img + img;
	return t;
}
void main()
{
	Complex c1, c2, c3;
	clrscr();
	c1.Read();
	c2.Read();
	c3 = c1.Addc1(c2);
	c1.Display();
	c2.Display();
	c3.Display();
	getch();
}