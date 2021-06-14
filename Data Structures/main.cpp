#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <iostream>
//#include "stlRedo.cpp"
// #include "linkedList.cpp"
// #include "doublyLinkedList.cpp"
#include "QueueWithArray.cpp"


int main() {
	Queue q;
	q.enqueue(5);
	q.enqueue(1);
	q.enqueue(2);
	q.dequeue();
	q.print();
	return 0;
}