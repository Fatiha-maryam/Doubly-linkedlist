#include "DoubleLinkedList.h"
DoubleLinkedList::DoubleLinkedList()
{
	head = NULL;
}
bool DoubleLinkedList::isempty()
{
	if (head == NULL)
		return true;
	else
		return false;

}
void DoubleLinkedList::insert_begin(int x)
{
	node* newnode = new node;
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (isempty())
	{
		head = newnode;
	}
	else
	{
		node* temp = head;
		temp->prev = newnode;
		newnode->next = temp;
		head = newnode;
	}
}
void DoubleLinkedList::insert_end(int x)
{   
	node* newnode = new node;
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (isempty())
	{
		head = newnode;
	}
	else
	{
		node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;
	}
}
void DoubleLinkedList::insert_after(int x,int pos)
{
	node* newnode = new node;
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (isempty())
	{
		head = newnode;
	}
	else
	{
		node* temp = head;
		int i = 1;
		while (temp->next!= NULL)
		{
			if (i == pos)
			{
				newnode->next = temp->next;
				newnode->prev = temp;
				temp->next->prev = newnode;
				temp->next = newnode;

			}
			i++;
			temp = temp->next;
		}
	}

}
void DoubleLinkedList::delete_begin()
{
	if (isempty())
	{
		cout << "The doublyLinkedList is empty " << endl;
	}
	else
	{
		node* temp = head;
		head = head->next;
		delete temp;
	}
}
void DoubleLinkedList::delete_end()
{
	if (isempty())
	{
		cout << " The doublyLinkedList is empty " << endl;
	}
	else
	{
		node* temp= head;
		while (temp->next!= NULL)
		{
			temp = temp->next;
		}
		node* deletenode = temp->next;
		temp->prev->next = NULL;
		delete deletenode;

	}
}
void DoubleLinkedList:: delete_fromposition(int pos)
{
	if (isempty())
	{
		cout << "\n The doubly list is empty " << endl;
	}
	else
	{
		node* temp = head;
		int i = 1;
		while (i < pos)
		{
			temp = temp->next;
			i++;
		}
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		delete temp;
	}
}
void DoubleLinkedList::display()
{
	if (isempty())
	{
		cout << "The doubly linked list is empty " << endl;
	}
	else
	{
		node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
	}


}