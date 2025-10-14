#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void tampilkan(Node* head) {
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

Node* reverse(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    
    cout << "Sebelum: ";
    tampilkan(head);
    
    head = reverse(head);
    
    cout << "Sesudah: ";
    tampilkan(head);
    
    return 0;
}