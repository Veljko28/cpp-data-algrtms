#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <iostream>
#include "nodes.h"
//#include "stlRedo.cpp"
 //#include "linkedList.cpp"
// #include "doublyLinkedList.cpp"
//#include "QueueWithPointers.cpp"

template <class T>
class LinkedList {
private:
	struct node<T>* head;
	struct node<T>* tail;
	int size;
public:
	LinkedList()
	{
		size = 0;
		head = NULL;
		tail = NULL;
	}
	bool isEmpty() {
		return size == 0;
	}

	void add(T data) {
		struct node<T>* temp = new node<T>;
		temp->data = data;
		temp->next = NULL;
		if (head == NULL) {
			head = temp;
			tail = head;
			head->next = tail;
		}
		else {
			tail->next = temp;
			tail = tail->next;
		}
		size++;
	}

	void addRange(std::vector<T> v) {
		for (T i : v) {
			add(i);
		}
	}

	void toString() {
		struct node<T>* temp = head;
		while (temp != NULL) {
			std::cout << temp->data << " ";
			temp = temp->next;
		}
		std::cout << std::endl;
	}


	void reverse() {
		struct node<T>* current = head, *next = NULL, *prev = NULL;
		while (current != NULL)
		{
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		head = prev;
	}
};

int main() {
	LinkedList<int> v;
	v.addRange({ 3, 4, 5 });
	v.toString();
	v.reverse();
	v.toString();
	return 0;
}