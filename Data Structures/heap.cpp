#include "nodes.h"

// MIN HEAP

template <class T>
struct heap {
public:	
	struct heapnode<T>* root;

	heap()
	{
		root = nullptr;
	}

	void add(T data) {
		struct heapnode<T>* temp = new heapnode<T>;
		temp->data = data;
		temp->parent = nullptr;
		temp->left = nullptr;
		temp->right = nullptr;

		if (root == nullptr) {
			temp->parent = temp;
			root = temp;
		}
		else {
			addToHeap(temp);
		}
		delete temp;
	}

	void toString() {
		struct heapnode<T>* temp = root;
		//while(temp)
	}

protected: 
	// returns true if the new value is bigger than the exisiting one 
	bool compare(T added,T exisiting){
		return added > exisiting;
	}

	void addToHeap(heapnode<T>* temp) {
		struct heapnode<T>* curr = root;
		while (true) {
			if (compare(temp->data, curr->data)) curr = curr->right; // goes right if higher value
			else curr = curr->left; // goes left otherwise

			if (curr == nullptr) {
				curr = temp;
				break;
			}
		}
		delete curr;
	}
};
