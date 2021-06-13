#pragma once

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

template<typename T>
struct queueNode {
    T data;
    heapnode* parent;
    heapnode* left;
    heapnode* right;
};

template<typename T>
struct queueNode {
    T data;
    queueNode* left;
    queueNode* right;
};

template<typename T>
struct queueNode* createNode(T data) {
    queueNode* node = new queueNode<T>();
    node->data = data;
    node->parent = NULL;
    node->left = NULL;
    return node;
}