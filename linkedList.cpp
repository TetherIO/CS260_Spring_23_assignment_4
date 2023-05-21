#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};


class linkedList {
private:
    Node *head;

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

        // since current is the node before the one to be removed, if current->next == nullptr, there's an issue
        if (current == nullptr || current->next == nullptr) {
            cout << "Invalid position" << endl;
            return -1;
        }

        // unlinking node from list and linking adjacent nodes
        Node *nodeToDelete = current->next;
        int removedValue = nodeToDelete->data;
        current->next = nodeToDelete->next;  // links the nodes positioned before and after the deleted one
        delete nodeToDelete;

        return removedValue;
    }

    // possibly could have made search function instead of repeated code in all 3 functions
    int get(int somePosition) {
        Node *current = head;
        for (int i = 0; current != nullptr && i < somePosition; i++){
            current = current->next;
        }

        if (current == nullptr){
            cout << "Invalid position" << endl;
            return -1;
        }

        return current->data;
    }
};


int main() {
    linkedList myList;

    //add method
    myList.add(5, 0);
    myList.add(10, 1);
    myList.add(15, 0);
    myList.add(20, 2);
    // 15>5>20>10

    //get method tests after adding elements
    cout << myList.get(0) << endl; // prints 15
    cout << myList.get(1) << endl; //  5
    cout << myList.get(2) << endl; //  20
    cout << myList.get(3) << endl; //   10

    //remove method tests removal and return of values
    cout << myList.remove(0) << endl; // 15
    cout << myList.remove(1) << endl; // 20

    return 0;

}