#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>


template <class T>
class avlNode {
private:
	int bf; // Balance Factor
	T value;
	int height;
	avlNode left, right;
public:
	avlNode(T value) {
		this->value = value;
	}

	avlNode getLeft() {
		return left;
	}

	avlNode getRight() {
		return right;
	}

	std::string stringValue() {
		return std::to_string(value);
	}
};

template <class T>
class AVLTree {
private:
	avlNode<T> root;
	int nodeCount;

	bool contains(avlNode<T> node, T value) {
		if (node == NULL) {
			return false;
		}
		int cmp = node.value == value;

		if (cmp < 0) return contains(node.left, value);

		if (cmp > 0) return contains(node.right, value);

		return true;
	}

	void insert(avlNode<T> node, T value) {
		if (node == NULL) return new avlNode<T>(value);

		int cmp = node.value = value;

		if (cmp < 0) node.left = insert(node.left, value);

		if (cmp > 0) node.right = insert(node.right, value);

		update(node);

		return balance(node);
	}

	// update the balance factor and the height of the node
	void update(avlNode<T> node) {
		int leftHeight = (node.left == NULL) ? -1 : node.left.height;
		int rightHeight = (node.right == NULL) ? -1 : node.right.height;

		node.height = 1 + std::max(leftHeight, rightHeight);

		node.bf = rightHeight - leftHeight;
	}

	avlNode<T> balance(avlNode<T> node) {
		if (node.bf == -2) {
			if (node.left.bf <= 0) {
				return leftLeftCase(node);
			}
			else return leftRightCase(node);
		}
		else if (node.bf == 2) {
			if (node.right.bf >= 0) {
				return rightRightCase(node);
			}
			else return rightLeftCase(node);
		}

		return node;
	}

	avlNode<T> leftLeftCase(avlNode<T> node) {
		return rightRotation(node);
	}

	avlNode<T> leftRightCase(avlNode<T> node) {
		node.left = leftRotation(node.left);
		return leftLeftCase(node);
	}

	avlNode<T> rightRightCase(avlNode<T> node) {
		return leftRotation(node);
	}

	avlNode<T> rightLeftCase(avlNode<T> node) {
		node.right = rightRotation(node.right);
		return  rightRightCase(node);
	}

	avlNode<T> leftRotation(avlNode<T> node) {
		avlNode<T> newParent = node.right;
		node.right = newParent.left;
		newParent.left = node;
		update(node);
		update(newParent);
		return newParent;
	}

	avlNode<T> rightRotation(avlNode<T> node) {
		avlNode<T> newParent = node.left;
		node.left = newParent.right;
		newParent.right = node;
		update(node);
		update(newParent);
		return newParent;
	}

	void remove(avlNode<T> node, T value) {
		if (node == NULL) return;

		int cmp = node.value == value;

		if (cmp < 0) node.left = remove(node.left, value);

		else if (cmp > 0) node.right = remove(node.right, value);

		else {
			if (node.left == NULL) return node.right;
			else if (node.right == NULL) return node.left;
			else {
				if (node.right.height > node.left.height) {
					T sValue = findMin(node.right);
					node.value = sValue;
					node.right = remove(node.right, sValue);
				}
				else {
					T sValue = findMax(node.left);
					node.value = sValue;
					node.left = remove(node.left, sValue);
				}
			}
		}

		update(node);

		return balance(node);
	}

	T findMin(avlNode<T> node) {
		while (node.left != NULL) {
			node = node.left;
		}
		return node.value;
	}

	T findMax(avlNode<T> node) {
		while (node.right != NULL) {
			node = node.right;
		}
		return node.value;
	}

public:
	AVLTree() {
		root = NULL;
		nodeCount = 0;
	}

	int rootHeight() {
		if (root != NULL) {
			return root.height;
		}
		return -1;
	}

	int size() {
		return nodeCount;
	}

	bool isEmpty() {
		return	nodeCount == 0;
	}

	bool contains(T value) {
		return contains(root, value);
	}

	void insert(T value) {
		if (value == NULL) return;

		if (!contains(root, value)) {
			root = insert(root, value);
			nodeCount++;
		}
	}

	void remove(T value) {
		if (value == NULL) return;

		if (contains(root, value)) {
			root = remove(root, value);
			nodeCount--;
		}
	}
};