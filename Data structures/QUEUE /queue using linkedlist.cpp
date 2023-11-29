#include <iostream>
using namespace std;

// Node class represents a node in the linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a node with given data
    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class represents the linked list
class LinkedList {
private:
    Node* head;// Pointer to the head of the linked list
    Node* tail;

public:
    // Constructor to initialize an empty linked list
    LinkedList() : head(nullptr) {}

    void enqueue(int value) {
        Node* newNode = new Node(value);
        if(head==NULL) head=tail=newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void front() {
        if (head) 
            cout << "front element: " << head->data << endl;
        else 
            cout << "queue is empty" << endl;
    }

    void dequeue() {
        if (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        else {
            cout << "queue is empty. Cannot pop." << endl;
        }
    }

    // Function to display the elements of the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << endl;
    }
};

int main() {
    // Creating a linked list (stack)
    LinkedList queue;

    // Inserting elements into the stack
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(5);

    // Displaying the stack
    cout << "queue: ";
    queue.display();

    // Displaying the top element
    queue.front();

    // Popping an element
    queue.dequeue();

    // Displaying the stack after popping
    cout << "queue after popping: ";
    queue.display();

    return 0;
}
