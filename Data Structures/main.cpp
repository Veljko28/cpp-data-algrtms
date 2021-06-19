#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <iostream>
//#include "stlRedo.cpp"
 #include "linkedList.cpp"
// #include "doublyLinkedList.cpp"
//#include "QueueWithPointers.cpp"


int main() {
	LinkedList<int> a;
	a.addRange({ 3 ,4, 5, 1, 2, 3 });
	a.toString();
	return 0;
}