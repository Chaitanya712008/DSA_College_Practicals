#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedlist
{
private:
    node *head;

public:

    // Constructor
    DoublyLinkedlist()
    {
        head = nullptr;
    }

    // Insert at end
    void insert(int val)
    {
        node *p = new node(val);

        if (head == nullptr)
        {
            head = p;
        }
        else
        {
            node *q = head;

            while (q->next != nullptr)
            {
                q = q->next;
            }

            q->next = p;
            p->prev = q;
        }
    }

    // Delete a node
    void remove(int val)
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }

        node *p;
        node *q = head;

        // Delete first node
        if (q->data == val)
        {
            p = head;
            head = head->next;

            if (head != nullptr)
            {
                head->prev = nullptr;
            }

            delete p;
            return;
        }

        // Delete other nodes
        while (q->next != nullptr)
        {
            if (q->next->data == val)
            {
                p = q->next;

                q->next = p->next;

                if (p->next != nullptr)
                {
                    p->next->prev = q;
                }

                delete p;
                return;
            }

            q = q->next;
        }

        cout << "Value " << val
             << " not found in the list" << endl;
    }

    // Display forward
    void displayForward()
    {
        node *q = head;

        cout << "Forward: ";

        while (q != nullptr)
        {
            cout << q->data << " <-> ";
            q = q->next;
        }

        cout << "NULL" << endl;
    }

    // Display backward
    void displayBackward()
    {
        node *q = head;

        if (q == nullptr)
        {
            cout << "Backward: NULL" << endl;
            return;
        }

        // Go to last node
        while (q->next != nullptr)
        {
            q = q->next;
        }

        cout << "Backward: ";

        // Move backward
        while (q != nullptr)
        {
            cout << q->data << " <-> ";
            q = q->prev;
        }

        cout << "NULL" << endl;
    }
};

int main()
{
    DoublyLinkedlist list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.displayForward();
    list.displayBackward();

    list.remove(20);

    list.displayForward();
    list.displayBackward();

    return 0;
}



// Output: 
// PS D:\Chaitanya162> g++ doubly_linkedlist.cpp                                                                                           
// PS D:\Chaitanya162> ./a.exe                                                                                                             
// Forward: 10 <-> 20 <-> 30 <-> NULL
// Backward: 30 <-> 20 <-> 10 <-> NULL
// Forward: 10 <-> 30 <-> NULL
// Backward: 30 <-> 10 <-> NULL
// PS D:\Chaitanya162> 
