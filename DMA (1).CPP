/* Program using DMA-1D constructor & destructor*/
#include<iostream.h>
#include<conio.h>
class DMA
{
	private:
		int *p, size;
	public:
		DMA()
		{
			p = '\0';
			cout<<"Default constructor";
		}
		DMA(int s);
		void ReadA();
		void Display();
		~DMA()
		{
			delete p;
			cout<<"Destructor executed";
		}
};
DMA::DMA(int s)
{
	size = s;
	p = new int[size];
}
void DMA::ReadA()
{
	for(int i=0; i<size; i++)
	{
		cout<<"Enter "<<i+1<<" element ";
		cin>>p[i];
	}
}
void DMA::Display()
{
	for(int i=0; i<size; i++)
	{
		cout<<"Elements at position "<<i+1<<" of array are : "<<p[i]<<endl;
	}
}
void main()
{
	int size;
	clrscr();
	cout<<"Enter the size of the array : ";
	cin>>size;
	DMA p1(size);
	p1.ReadA();
	p1.Display();
	p1.~DMA();
	getch();
}