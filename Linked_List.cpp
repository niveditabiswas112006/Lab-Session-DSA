#include <iostream>
using namespace std;

// Define a Node structure
struct Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node
};

int main() {
    // Create the nodes
    Node* head = new Node{10, nullptr};
    Node* second = new Node{20, nullptr};
    Node* third = new Node{30, nullptr};

    // Link the nodes together
    head->next = second;
    second->next = third;

    // Print the linked list
    Node* current = head; // Start at the head
    cout << "Linked List: ";
    while (current != nullptr) {
        cout << current->data << " "; // Print the data
        current = current->next;     // Move to the next node
    }

    return 0;
}

