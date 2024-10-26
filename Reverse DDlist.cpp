#include"node.h"
#include"DoubleList.h"
int main()
{
	DoubleList obj;
	obj.add_node(3);
	obj.add_node(5);
	obj.add_node(9);
	obj.add_node(4);
	cout << "\n The original Doubly LinkedList is : " << endl;
	obj.display();
	cout << "\n The reverse Doubly Linked List is : " << endl;
	obj.reverse_node();
	obj.display();

}