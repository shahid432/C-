// Implementation of Hashing
#include<iostream.h>
#include<conio.h>
#define TABLE_SIZE 10
enum bool {false, true};
class HashTable
{
	private:
		int table[TABLE_SIZE];
		bool isOccupied[TABLE_SIZE];
	public:
		HashTable();
		int HashFunction(int key);
		void Insert(int key);
		void Search(int key);
		void Display();
};
HashTable::HashTable()
{
	for(int i=0; i<TABLE_SIZE; i++)
	{
		table[i] = -1;
		isOccupied[i] = false;
	}
}
int HashTable::HashFunction(int key)
{
	return key % TABLE_SIZE;
}
void HashTable::Insert(int key)
{
	int index = HashFunction(key);
	int originalIndex = index;
	while(isOccupied[index])
	{
		index = (index+1)%TABLE_SIZE;
		if(index == originalIndex)
		{
			cout<<"Hash Table is full, cannot insert"<<key<<endl;
		}
	}
	table[index] = key;
	isOccupied[index] = true;
	cout<<"Inserted "<<key<<" at index "<<index<<endl;
}
void HashTable::Search(int key)
{
	int index = HashFunction(key);
	int originalIndex = index;
	while(isOccupied[index])
	{
		if(table[index] == key)
		{
			cout<<"Key "<<key<<" found at index "<<index<<endl;
		}
		index = (index+1)%TABLE_SIZE;
		if(index == originalIndex)
		{
			break;
		}
	}
	cout<<"Key "<<key<<" not found.";
}
void HashTable::Display()
{
	cout<<"Hash Table : "<<endl;
	for(int i=0; i<TABLE_SIZE; i++)
	{
		if(isOccupied[i])
		{
			cout<<"Index "<<i<<": "<<table[i]<<endl;
		}
		else
		{
			cout<<"Index "<<i<<": Empty"<<endl;
		}
	}
}
void main()
{
	HashTable h;
	clrscr();
	int choice, key;
	do
	{
		cout<<"Hash Table Operations : "<<endl;
		cout<<"1. Insert"<<endl;
		cout<<"2. Search"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter key to insert : ";
				cin>>key;
				h.Insert(key);
				break;
			case 2:
				cout<<"Enter key to search : ";
				cin>>key;
				h.Search(key);
				break;
			case 3:
				h.Display();
				break;
			case 4:
				cout<<"Exiting the program.";
				break;
			default:
				cout<<"Invalid choice.";
		}
	}
	while(choice!=4);
	getch();
}
