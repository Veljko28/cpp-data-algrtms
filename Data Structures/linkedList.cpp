#include "nodes.h"
#include <vector>
#include <iostream>


namespace {

    template<class T>
    class LinkedList {
    public: 
        struct node<T> *head, *tail;

            LinkedList() {
            head = nullptr;
            tail = nullptr;
            size = 0;
        }

        void add(T data){ // O(1)
            struct node<T>* temp = new node<T>;
            temp->data = data;
            temp->next = nullptr;
            if (head == nullptr){
                head = temp;
                tail = temp;
                head->next = tail;
            }
            else {
                tail->next = temp;
                tail = tail->next;
            }
            size++;
            return;
        }

        void addRange(std::vector<T> vec){ // O(n) n == vec.size()
            for (T item : vec){
                add(item);
            }
            return;
        }

        void toString() { // 
            struct node<T> *temp = head;
            while( temp->next != nullptr){
                std::cout << temp->data << " ";
                temp = temp->next;
            }
            std::cout << temp->data << std::endl;
            delete temp;
        }

        void reverse() {
            struct node<T>* current = head, * prev = NULL, *next = head;
            while (current != NULL)
            {
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }
            return;
        }

        int length(){
            return size;
        }

    protected:    
        int size;
        
    };
}
