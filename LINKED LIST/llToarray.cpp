#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

vector<int> linkedListToArray(Node* head) {
    vector<int> arr;
    Node* temp = head;

    while (temp != NULL) {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return arr;
}

Node* arrayToLinkedList(vector<int> arr) {
    if (arr.size() == 0) return NULL;

    Node* head = new Node(arr[0]);
    Node* tail = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* newNode = new Node(arr[i]);
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}

int main() {
    // Create linked list: 1->2->3->NULL
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Linked List → Array
    vector<int> arr = linkedListToArray(head);

    // Array → Linked List
    Node* newHead = arrayToLinkedList(arr);

    // Print new linked list
    Node* temp = newHead;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}
void linkedListToArray(Node* head, int arr[]) {
    int i = 0;
    while (head != NULL) {
        arr[i++] = head->data;
        head = head->next;
    }
}
