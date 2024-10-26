#include "DoubleList.h"
DoubleList::DoubleList()
{
	head = NULL;
	tail = NULL;
}
bool DoubleList::isempty()
{
	if (head == NULL)
		return true;
	else
		return false;

}
void DoubleList::add_node(int x)
{
	node* newnode = new node;
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (isempty())
	{
		head =tail= newnode;
	}
	else
	{
		node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		newnode->prev = temp;
		temp->next = newnode;
		tail = newnode;
	}
}
void DoubleList::reverse_node()
{
	if (isempty())
	{
		cout << "\n The list is empty " << endl;
	}
	else 
	{
		node* current = head;
		node* ptr = NULL;
		while (current != NULL)
		{
			ptr = current->next;
			current->next = current->prev;
			current->prev = ptr;
			current = ptr;
		}
		ptr = head;
		head = tail;
		tail = ptr;
	}
}
void DoubleList::display()
{
	if (isempty())
	{
		cout << "\n The Double linked list is empty " << endl;
	}
	else
	{
		node* temp = head;
		while (temp!= NULL)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
	}
}