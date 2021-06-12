#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "stlRedo.cpp"
#include "linkedList.cpp"
#include "doublyLinkedList.cpp"




int main() {
	// stlRedo();
	DoublyLinkedList<int> lst;
	lst.add(1); lst.add(3); lst.add(5);
	lst.revToString();
	std::cout << lst.length();
	return 0;
}