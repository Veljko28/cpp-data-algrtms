#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <iostream>
//#include "nodes.h"
//#include "stlRedo.cpp"
 //#include "linkedList.cpp"
// #include "doublyLinkedList.cpp"
//#include "QueueWithPointers.cpp"

template<typename T>
struct dblnode
{
	T data;
	dblnode* next;
	dblnode* prev;
};


template<typename T>
struct node {
	T data;
	node* next;
};



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

	int length() {
		return size;
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


template <class T>
class DoublyLinkedList {
private:
	struct dblnode<T>* head;
	struct dblnode<T>* tail;
	int size;
public:
	DoublyLinkedList()
	{
		size = 0;
		head = NULL;
		tail = NULL;
	}
	bool isEmpty() {
		return size == 0;
	}

	int length() {
		return size;
	}

	void add(T data) {
		struct dblnode<T>* temp = new dblnode<T>;
		temp->data = data;
		temp->next = NULL;
		temp->prev = NULL;
		if (head == NULL) {
			head = temp;
			tail = temp;
			head->next = tail;
			head->prev = NULL;
		}
		else {
			temp->prev = tail;
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
		struct dblnode<T>* temp = head;
		while (temp != NULL) {
			std::cout << temp->data << " ";
			temp = temp->next;
		}
		std::cout << std::endl;
	}

	void revToString() {
		struct dblnode<T>* temp = tail;
		while (temp != NULL)
		{
			std::cout << temp->data << " ";
			temp = temp->prev;
		}
		std::cout << std::endl;
	}

	void reverse() {
		struct dblnode<T>* current = head, *temp = NULL;
		while (current != NULL) {
			temp = current->prev;
			current->prev = current->next;
			current->next = temp;
			current = current->prev;
		}
		
		if (temp != NULL) {
			tail = head;
			head = temp->prev;
		}
	}

};

int main() {
	//LinkedList<int> v;
	//v.addRange({ 3, 4, 5 });
	//v.toString();
	//v.reverse();
	//v.toString();
	
	DoublyLinkedList<int> v;
	v.addRange({ 1,2,3 });
	v.reverse();
	v.toString();
	v.revToString();

	return 0;
}