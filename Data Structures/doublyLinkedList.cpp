#include "nodes.h"
#include <iostream>

namespace {

    template<class T>
    class DoublyLinkedList {
    public:
        struct dblnode<T> *head, *tail;

        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
            size = 0;
        }

        void add(T data) {
            struct dblnode<T> *temp = new dblnode<T>;
            temp->data = data;
            temp->next = nullptr;
            temp->prev = nullptr;


            if (head == nullptr){
                head = temp;
                tail = temp;
            }
            else {
                temp->prev = tail;
                tail->next = temp;
                tail = tail->next;
            }
            size++;
            delete temp;
            return;
        }

        void toString() {
            struct dblnode<T> *temp = head;
            while( temp->next != nullptr){
                std::cout << temp->data << " ";
                temp = temp->next;
            }
            std::cout << temp->data << std::endl;
            delete temp;
        }

        void revToString(){
            struct dblnode<T> *temp = tail;
            while( temp->prev != nullptr){
                std::cout << temp->data << " ";
                temp = temp->prev;
            }
            std::cout << temp->data << std::endl;
            delete temp;
        }

        int length() {
            return size;
        }

    protected: 
        int size;
    };

}

