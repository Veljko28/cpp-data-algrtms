#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <iostream>
 #include "nodes.h"
 #include "linkedList.cpp"
// #include "doublyLinkedList.cpp"
//#include "QueueWithPointers.cpp"

// template<typename T>
// void reverse_list(node<T> *head){
//  node<T> *current = head, *next = head, *prev = NULL;
//  while (current != NULL){
// 	 next = current->next;
// 	 current->next = prev;
// 	 prev = current;
// 	 current = next;
//  } 
// }


int main() {
	LinkedList<int> a;
	a.addRange({ 3 ,4, 5, 1, 2, 3 });
	a.toString();
	return 0;
}