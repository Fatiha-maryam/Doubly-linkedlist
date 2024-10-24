#pragma once
#include"node.h"
class DoubleLinkedList
{
public:
	node* head = NULL;
	DoubleLinkedList();
	bool isempty();
	void insert_begin(int x);
	void insert_after(int x, int pos);
	void insert_end(int x);
	void delete_begin();
	void delete_end();
	void delete_fromposition(int pos);
	void display();

};

