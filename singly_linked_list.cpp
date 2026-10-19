#include <iostream>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;

   //constructor for Node
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Linked list operations
class LinkedList {
private:
    Node* head;

public:
    //constructor for list
    LinkedList() {
        head = NULL;
    }

    // Insert a node at the end
    void insert(int val) {
        Node* p = new Node(val); // p is used for new node
        if (head == NULL) {
            head = p;
        } else {
            Node* q = head; // q is used for traversal
            while (q->next != NULL) {
                q = q->next;
            }
            q->next = p;
        }
    }

    // Delete a node by value
    void remove(int val) {
        Node* p = NULL;
        Node* q = head;

        // If head node itself holds the value
        if (q!=NULL && q->data == val) {
            p = head;
            head = head->next;
            delete p;
            return;
        }

        // Traverse 
        while (q->next != NULL) {
            if (q->next->data == val) {
                p = q->next;
                q->next = p->next;
                delete p;
                return;
            }
            q = q->next;
        }

        cout <<endl<< "Value " << val << " not found in the list.\n";
    }

    // Display list
    void display() {
        cout<<endl<<"Linked List ";
        Node* q = head;
        while (q != NULL) {
            cout << q->data << " -> ";
            q = q->next;
        }
    }
};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(110);
    list.insert(50);
    list.insert(54);
    list.insert(60);
    list.insert(70);
    list.insert(80);
    list.insert(90);
    list.insert(100);
    list.insert(200);
    list.insert(500);
    list.insert(1000);
   
    
    
    list.display();
    
    list.remove(10);
    list.display(); 

    list.remove(70); 
    list.display();

    list.remove(100); 
    list.display();

    list.remove(200);
    list.display();


    return 0;
}


//PS D:\Chaitanya162> g++ singly_linked_list.cpp
PS D:\Chaitanya162> ./a.exe                   

Linked List 10 -> 20 -> 30 -> 40 -> 110 -> 50 -> 54 -> 60 -> 70 -> 80 -> 90 -> 100 -> 200 -> 500 -> 1000 -> 
Linked List 20 -> 30 -> 40 -> 110 -> 50 -> 54 -> 60 -> 70 -> 80 -> 90 -> 100 -> 200 -> 500 -> 1000 -> 
Linked List 20 -> 30 -> 40 -> 110 -> 50 -> 54 -> 60 -> 80 -> 90 -> 100 -> 200 -> 500 -> 1000 -> 
Linked List 20 -> 30 -> 40 -> 110 -> 50 -> 54 -> 60 -> 80 -> 90 -> 200 -> 500 -> 1000 -> 
Linked List 20 -> 30 -> 40 -> 110 -> 50 -> 54 -> 60 -> 80 -> 90 -> 500 -> 1000 -> 
PS D:\Chaitanya162> 
