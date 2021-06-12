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
struct heapnode {
    T data;
    heapnode* parent;
    heapnode* left;
    heapnode* right;
};