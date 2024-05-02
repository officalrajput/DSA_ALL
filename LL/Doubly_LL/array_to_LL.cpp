#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = this->prev = NULL;
    }
};

void insertArray(int arr[], Node*& head, Node*& tail) {
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    for (int i = 0; i < size; i++) {
        if (head == NULL) {
            head = new Node(arr[i]);
            tail = head;
        }
        else {
            // Step:1 --> create a node
            Node* temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
}

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 5, 6, 7};
    Node* head = NULL;
    Node* tail = NULL;
    insertArray(arr, head, tail);
    print(head);
}
