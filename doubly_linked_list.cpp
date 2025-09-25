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

    }

    // Remove from position pos
    void removeFromPos(int pos) {

    }

    // Find value val and remove it
    void removeValue(int pos) {
        // If the list is empty
        if (head == nullptr) {
            return;
        }
        Node *curr = head;
        // Traverse to the node at the given position
        for (int i = 1; curr != nullptr && i < pos; ++i) {
            curr = curr->next;
        }
        // If the position is out of range
        if (curr == nullptr) {
            return;
        }
        // Update the previous node's next pointer
        if (curr->prev != nullptr) {
            curr->prev->next = curr->next;
        }
        // Update the next node's prev pointer
        if (curr->next != nullptr) {
            curr->next->prev = curr->prev;
        }
        // If the node to be deleted is the head node
        if (head == curr) {
            head = curr->next;
        }
        // Deallocate memory for the deleted node
        delete curr;
    }

    // Find and return the node with given value
    Node* search(int value) {

    }

    // Free all memory
    ~DoublyLinkedList() {

    }
}
