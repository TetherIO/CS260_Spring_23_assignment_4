//#include "linkedList.h"
#include <iostream>

using namespace std;

struct Node {
    int data;
    node* next;
};


class linkedList {
private:
    node* head;

public:
    linkedList() {
        head = nullptr; // allows me to handle initial edge case
    }

    void add(int someValue, int somePosition){
        node *new_node = new node;
        new_node->data = someValue;
        new_node->next = nullptr;

        node *current = head;
        // somePosition = n+1 (n is index)
        while (current != nullptr){
            current = current->next;
        }




    }
};


int main(){

    return 0;
}

// function that inserts given value to given position


// function that removes value from given position and returns it


// function that takes a position and returns that value without removing it

// tests

