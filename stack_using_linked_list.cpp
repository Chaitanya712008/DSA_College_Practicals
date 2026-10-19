#include<iostream>
#define MAX 5
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int x){
        data = x;
        next = NULL;
    }
};

class stack
{
    private:
    node *top;


    public:
    stack(){
        top = NULL;
    }


 
int empty(){
    if (top = NULL){
        return 1;
    }else{
        return 0;
    }
}

void push(int x){
    node *p = new node(x);
    p -> next = top;
    top = p;
}

int pop(){
    int x = top -> data;
    node *p = top;
    top = top -> next;
    delete p;
    return x;
}

void display(){
    node *q = top;
    while(q != NULL){
        cout << q -> data << endl;
        q = q -> next;
    }
}
int peek(){
    return (top -> data);
}
};


int main(){

    stack s;
    int x;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    s.display();

    cout << endl;
    s.pop();
    s.pop();

    s.display();

    
    

    return 0;
}

// Output:
// PS D:\Chaitanya162> g++ stack_using_linked_list.cpp
// PS D:\Chaitanya162> ./a.exe                        
// 40
// 30
// 20
// 10

// 20
// 10
// PS D:\Chaitanya162> 