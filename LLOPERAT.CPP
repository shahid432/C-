// Operations on linked list
#include<iostream.h>
#include<conio.h>
class Node
{
	public:
		int data;
		Node *next;
};
void insertAtBeginning(Node **head_ref, int new_data)
{
	Node *new_node = (Node *)malloc(sizeof(Node));
	new_node -> data = new_data;
	new_node -> next = (*head_ref);
	(*head_ref) = new_node;
}
void insertAfter(Node *prev_node, int new_data)
{
	if(prev_node == NULL)
	{
		cout<<"Previous node cannot be NULL";
		return;
	}
	Node *new_node = (Node *)malloc(sizeof(Node));
	new_node -> data = new_data;
	new_node -> next = prev_node -> next;
	prev_node -> next = new_node;
}
void insertAtEnd(Node **head_ref, int new_data)
{
	Node *new_node = (Node *)malloc(sizeof(Node));
	Node *last = *head_ref;
	new_node -> data = new_data;
	new_node -> next = NULL;
	if(*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}
	while(last->next != NULL) last=last->next;
	last->next = new_node;
	return;
}
void deleteNode(Node ** head_ref, int key)
{
	Node *temp = *head_ref, *prev;
	if(temp!=NULL && temp->data == key)
	{
		*head_ref = temp->next;
		free(temp);
		return;
	}
	while(temp!=NULL && temp->data != key)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
		return;
	prev->next = temp->next;
	free(temp);
}
bool searchNode(Node **head_ref, int key)
{
	Node *current = *head_ref;
	while(current!=NULL)
	{
		if(current->data == key)
			return true;
		current = current->next;
	}
	return false;
}
void printList(Node *node)
{
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node=node->next;
	}
}
void main()
{
	Node *head = NULL;
	insertAtEnd(&head, 1);
	insertAtBeginning(&head, 2);
	insertAtBeginning(&head, 3);
	insertAtEnd(&head, 4);
	insertAfter(head->next, 5);
	cout<<"Linked List : ";
	printList(head);
	deleteNode(&head, 3);
	printList(head);
	int item_to_find = 3;
	if(searchNode(&head, item_to_find))
	{
		cout<<endl<<item_to_find<<" is not found";
	}
	getch();
}