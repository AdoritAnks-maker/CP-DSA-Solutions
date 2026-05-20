#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// ===== BASIC FUNCTIONS =====
int ListLength(Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

void printList(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << " -> NULL\n";
}

// ===== 1. INSERT (Tera perfect code) =====
void insertAt(Node** head, int data, int pos) {
    Node* newNode = new Node{data, NULL};
    if (pos == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    Node* prev = *head;
    for (int i = 0; i < pos - 1 && prev; i++)
        prev = prev->next;
    if (prev) {
        newNode->next = prev->next;
        prev->next = newNode;
    }
}

// ===== 2. DELETE =====
void deleteAt(Node** head, int pos) {
    if (!*head) return;
    
    if (pos == 0) {
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
        return;
    }
    
    Node* prev = *head;
    for (int i = 0; i < pos - 1 && prev; i++)
        prev = prev->next;
    
    if (prev && prev->next) {
        Node* temp = prev->next;
        prev->next = temp->next;
        delete temp;
    }
}

// ===== 3. REVERSE =====
void reverseList(Node** head) {
    Node *prev = NULL, *curr = *head, *next;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}

// ===== 4. SEARCH =====
int search(Node* head, int key) {
    int pos = 0;
    while (head) {
        if (head->data == key) return pos;
        head = head->next;
        pos++;
    }
    return -1;
}

// ===== 5. MIDDLE NODE (Slow-Fast) =====
Node* findMiddle(Node* head) {
    if (!head) return NULL;
    
    Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// ===== 6. Nth FROM END =====
int nthFromEnd(Node* head, int n) {
    int len = ListLength(head);
    if (n > len) return -1;
    
    Node* curr = head;
    for (int i = 0; i < len - n; i++)
        curr = curr->next;
    return curr->data;
}

// ===== MAIN TEST =====
int main() {
    Node* head = NULL;
    
    // Build list: 10 -> 20 -> 30 -> 40 -> 50
    insertAt(&head, 10, 0);
    insertAt(&head, 20, 1);
    insertAt(&head, 30, 2);
    insertAt(&head, 40, 3);
    insertAt(&head, 50, 4);
    
    cout << "Original: "; printList(head);
    
    // Test all functions
    cout << "Length: " << ListLength(head) << "\n";
    cout << "Search 30: " << search(head, 30) << "\n";
    cout << "Middle: " << findMiddle(head)->data << "\n";
    cout << "3rd from end: " << nthFromEnd(head, 3) << "\n";
    
    // Delete at pos 1
    deleteAt(&head, 1);
    cout << "After delete pos 1: "; printList(head);
    
    // Reverse
    reverseList(&head);
    cout << "After reverse: "; printList(head);
    
    return 0;
}
