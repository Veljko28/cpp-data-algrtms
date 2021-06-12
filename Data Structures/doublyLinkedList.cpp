#include "nodes.h"

template<class T>
class DoublyLinkedList {
public:
    struct dblnode<T> *head, *tail;

    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void add(T data) {
        struct dblnode<T> *temp = new dblnode<T>;
        temp->data = data;
        temp->next = NULL;
        temp->prev = NULL;


        if (head == NULL){
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
        while( temp->next != NULL ){
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << temp->data << std::endl;
        delete temp;
    }

    void revToString(){
        struct dblnode<T> *temp = tail;
        while( temp->prev != NULL ){
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


