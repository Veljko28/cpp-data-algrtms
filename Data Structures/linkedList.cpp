#include "nodes.h"

template<class T>
class LinkedList {
public: 
    struct node<T> *head, *tail;

        LinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void add(T data){ // O(1)
        struct node<T>* temp = new node<T>;
        temp->data = data;
        temp->next = NULL;
        if (head == NULL){
            head = temp;
            tail = temp;
            head->next = tail;
        }
        else {
            tail->next = temp;
            tail = tail->next;
        }
        size++;
        delete temp;
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
        while( temp->next != NULL ){
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << temp->data << std::endl;
        delete temp;
    }

    int length(){
        return size;
    }

protected:    
    int size;
        
};