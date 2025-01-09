/* Program using DMA constructor for 2-D array*/
#include<iostream.h>
#include<conio.h>
class DMA2d
{
	private:
		int **p, row, col;
	public:
		DMA2d()
		{
			row = 0; col = 0; p = '\0';
			cout<<"Default constructor";
		}
		DMA2d(int row, int col);
		void Read2d();
		void Display();
		~DMA2d();
};
void DMA2d::DMA2d(int row, int col)
{
	p = new int*[row];
	for(int i=0; i<row; ++i)
		p[i] = new int[col];
}
void DMA2d::~DMA2d()
{
	for(int i=0; i<row; ++i)
		delete p[i];
	delete p;
	cout<<"Destructor executed.";
}
void DMA2d::Read2d()
{
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			cout<<"Enter ["<<i+1<<j+1<<"] element : ";
			cin>>p[i][j];
		}
	}
}
void DMA2d::Display()
{
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			cout<<"Elements at position "<<i+1<<","<<j+1<<" of matrix are : "<<p[i][j]<<endl;
		}
	}
}
void main()
{
	int row, col;
	clrscr();
	cout<<"Enter the rows of the matrix : ";
	cin>>row;
	cout<<"Enter the columns of the matrix : ";
	cin>>col;
	DMA2d p1(row, col);
	p1.Read2d();
	p1.Display();
	getch();
}
