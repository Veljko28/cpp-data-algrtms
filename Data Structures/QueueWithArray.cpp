#include <iostream>
#include <vector>

class Queue {
private:
    int size;
    std::vector<int> queue;
public: 
    Queue() {
        size = 0;
        queue = {};
    }; 
    void enqueue(int value) {
        size++;
        queue.insert(queue.begin(), value);
    }
    int dequeue(){
        int temp = queue[size - 1];
        queue.pop_back();
        size--;
        return temp;
    }
    void print(){
        for (int i : queue){
            std::cout << i <<  " ";
        }
        std::cout << std::endl;
    }
    bool isEmpty(){
        return size == 0;
    }
};
