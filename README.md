# Doubly Linked List Implementation in C++

This project is a simple implementation of a Doubly Linked List in C++. It provides basic functionalities for inserting and deleting elements at various positions in the list, as well as displaying the current elements.

## Features

- **Insert at the beginning**: Add an element to the start of the list.
- **Insert at the end**: Add an element to the end of the list.
- **Insert after a given position**: Insert an element after a specified position.
- **Delete from the beginning**: Remove the first element in the list.
- **Delete from the end**: Remove the last element in the list.
- **Delete from a given position**: Delete an element at a specified position.
- **Display the list**: Show all the elements in the list.

## Prerequisites

- C++ compiler (e.g., `g++`, `clang++`)
- Visual Studio Code or another text editor/IDE for C++

## Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/your-username/double-linked-list.git
cd double-linked-list
g++ -o main main.cpp DoubleLinkedList.cpp
./main
Inserting element at the beginning of Doubly Linked List:
3 9 4 5

Inserting the element at the end:
3 9 4 5 2 1

Inserting the element after a given position:
2 3 9 4 5 2 1 6

Deleting the elements from the beginning:
9 4 5 2 1 6

Deleting the elements from the end of the list:
9 4 5 2 1

Deleting the elements from the given position:
9 4 2 1
