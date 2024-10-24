#include"node.h"
#include"DoubleLinkedList.h"
using namespace std;
int main()
{
	DoubleLinkedList obj;
	cout << " Inserting element at the begining of Doubly Linked List : " << endl;
	obj.insert_begin(5);
	obj.insert_begin(4);
	obj.insert_begin(9);
	obj.insert_begin(3);
	obj.display();
	cout << "\n Inserting the element at the end " << endl;
	obj.insert_end(2);
	obj.insert_end(1);
	obj.display();
	cout << "\n Inserting the element after given position " << endl;
	obj.insert_after(0,2);
	obj.insert_after(6,4);
	obj.display();
	cout << "\n Deleting the elements from the begining  " << endl;
	obj.delete_begin();
	obj.display();
	obj.delete_end();
	cout << "\n Deleting the elements from the end of the list " << endl;
	obj.display();
	cout << "\n Deleting the elements from the given position " << endl;
	obj.delete_fromposition(3);
	obj.display();
}