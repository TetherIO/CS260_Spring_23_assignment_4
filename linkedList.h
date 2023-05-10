#ifndef CS260_SPRING_23_ASSIGNMENT_4_LINKEDLIST_H
#define CS260_SPRING_23_ASSIGNMENT_4_LINKEDLIST_H

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

        if (head == nullptr)



    }
};


#endif
