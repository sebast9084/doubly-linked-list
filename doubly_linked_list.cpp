#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Insert at the end
    void displayAll() {

    }

    // Insert at the end
    void append(int val) {

    }

    // Insert at the front
    void prepend(int val) {

    }

    // Insert between first and last, at possition pos
    void insert(int val, int pos) {
        if (pos <= 0) {
            std::cout << "Position must be >= 1.\n";
            return;
        }

        // Insertion at the beginning
        if (pos == 1) {
            Node* n = new Node(val);
            n->prev = nullptr;
            n->next = head;
            if (head) head->prev = n;
            head = n;
            // if (tail == nullptr) tail = n; // uncomment if you track tail
            return;
        }

        // Find node at position (pos-1)
        Node* curr = head;
        for (int i = 1; i < pos - 1 && curr != nullptr; ++i) {
            curr = curr->next;
        }

        if (curr == nullptr) {
            std::cout << "Position is out of bounds.\n";
            return;
        }

        Node* n = new Node(val);
        n->prev = curr;
        n->next = curr->next;

        if (curr->next) curr->next->prev = n;
        curr->next = n;

        // If inserting after the last node, update tail if you keep one
        // if (n->next == nullptr) tail = n;
    }


    // Remove from position pos
    void removeFromPos(int pos) {

    }

    // Find value val and remove it
    void removeValue(int pos) {

    }

    // Find and return the node with given value
    Node* search(int value) {

    }

    // Free all memory
    ~DoublyLinkedList() {

    }
}
