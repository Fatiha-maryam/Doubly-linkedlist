#pragma once
#include"node.h"
class DoubleList
{  public:
	node* head;
	node* tail;
	DoubleList();
	bool isempty();
	void add_node(int x);
	void reverse_node();
	void display();
};

