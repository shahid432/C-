// Multipath Inheritance
#include<iostream.h>
#include<conio.h>
class Student
{
	protected:
		int rn;
		char branch[20];
	public:
		void ReadStudentData()
		{
			cout<<"Enter Roll number : ";
			cin>>rn;
			cout<<"Enter branch : ";
			cin>>branch;
		}
		void DisplayStudentData()
		{
			cout<<"Roll No. of the student is "<<rn<<endl;
			cout<<"Branch of student is "<<branch<<endl;
		}
};
class InternalExam : virtual public Student
{
	protected:
		int Sub1Marks;
		int Sub2Marks;
	public:
		void ReadData()
		{
			cout<<"Marks scored in Subject 1(<=100) : ";
			cin>>Sub1Marks;
			cout<<"Marks scored in Subject 2(<=100) : ";
			cin>>Sub2Marks;
		}
		int InternalTotalMarks()
		{
			return Sub1Marks + Sub2Marks;
		}
		void DisplayData()
		{
			cout<<"Marks entered in Subject1 and Subject2 are "<<Sub1Marks<<", "<<Sub2Marks<<endl;
			cout<<"Internal Total Marks Scored : "<<InternalTotalMarks()<<endl;
		}
};
class ExternalExam : virtual public Student
{
	protected:
		int Sub1Marks;
		int Sub2Marks;
	public:
		void ReadData()
		{
			cout<<"Enter Marks of Subject1(<=100) : ";
			cin>>Sub1Marks;
			cout<<"Enter Marks of Subject2(<=100) : ";
			cin>>Sub2Marks;
		}
		int ExternalTotalMarks()
		{
			return Sub1Marks + Sub2Marks;
		}
		void DisplayData()
		{
			cout<<"Marks entered in Subject1 and Subject2 are "<<Sub1Marks<<", "<<Sub2Marks<<endl;
			cout<<"External Total Marks Scored : "<<ExternalTotalMarks()<<endl;
		}
};
class Result : public InternalExam, public ExternalExam
{
	protected:
		int total;
	public:
		int TotalMarks()
		{
			return InternalTotalMarks() + ExternalTotalMarks();
		}
};
void main()
{
	Result student1;
	clrscr();
	cout<<"Enter data of the student : "<<endl;
	student1.ReadStudentData();
	cout<<"Enter Internal Marks : "<<endl;
	student1.InternalExam::ReadData();
	cout<<"Enter External Marks : "<<endl;
	student1.ExternalExam::ReadData();
	student1.DisplayStudentData();
	student1.InternalExam::DisplayData();
	student1.ExternalExam::DisplayData();
	cout<<"Total Marks Scored : "<<student1.TotalMarks();
	getch();
}