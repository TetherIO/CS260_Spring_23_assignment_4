//#include "linkedList.h"
#include <iostream>

using namespace std;

struct Node {
    int data;
    node *next;
};


class linkedList {
private:
    node *head;

public:
    linkedList() {
        head = nullptr; // sets head to nullptr, which represents an empty list
    }

    void add(int someValue, int somePosition) { // assumes user is counting/indexing from 0 for somePosition
        Node *new_node = new Node;
        new_node->data = someValue;
        //new_node->next = nullptr;

        if (somePosition == 0) { // handles insertion at head of list
            new_node->next = head;
            head = new_node;
            return;
        }

        Node *current = head;
        // iterating over list to find position
        for (int i = 0; current != nullptr && i < (somePosition - 1); i++) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Invalid position" << endl;
            delete new_node;
            return;
        }

        // inserting the new node at the desired position
        new_node->next = current->next;
        current->next = new_node;
    }

    int remove(int somePosition) {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return -1;
        }

        if (somePosition == 0) {
            Node *nodeToDelete = head;
            head = head->next;
            int removedValue = nodeToDelete->data;
            delete nodeToDelete;
            return removedValue;
        }

        Node *current = head;
        for (int i = 0; current != nullptr && i < somePosition - 1; i++) {
            current = current->next;
        }

        if (current == nullptr || current->next == nullptr) {
            cout << "Invalid position" << endl;
            return -1;
        }

        // unlinking node from list
        Node *nodeToDelete = current->next;
        int removedValue = nodeToDelete->data;
        current->next = nodeToDelete->next;
        delete nodeToDelete;

        return removedValue;
    }
};


int main() {
    linkedList myList;

    myList.add(5, 0);
    myList.add(10, 1);
    myList.add(15, 0);
    myList.add(20, 2);

    return 0;
}

// function that inserts given value to given position


// function that removes value from given position and returns it


// function that takes a position and returns that value without removing it

// tests

