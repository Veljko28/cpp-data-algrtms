#include <iostream>

namespace {
    class QueueP {
    private:
        int* queue;
        int size;

        void addFront(int value) {
            for (int i = 1; i<size;i++){
                queue[i] = queue[i-1];
            }
            queue[0] = value;
        }

    public: 
        QueueP() {
            size = 0;
            queue = nullptr;
        }; 
        void enqueue(int value) {
            if (queue == nullptr){
                queue = (int*)malloc(sizeof(int));
                queue[0] = value;
                size++;
            }
            else {
                queue = (int*)realloc(queue, ++size);
                addFront(value);
            }
        }
}

    int dequeue(){
        int temp = queue[size - 1];
        queue = (int*)realloc(queue, --size);
        return temp;
    }
    void print(){
        for (int i =0;i<size;i++){
            std::cout << queue[i] << " ";
        }
        std::cout << std::endl;
    }
    bool isEmpty(){
        return size == 0;
    }

};
