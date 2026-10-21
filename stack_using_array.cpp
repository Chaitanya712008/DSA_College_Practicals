#include<iostream>
#define MAX 5
using namespace std;

class stack
{
    private:
    int top;
    int a[MAX];

    public:
    stack(){
        top = -1;
    }

    int empty()
    { 
        if (top == -1)
        {
            return 1;
        }
        else{
            return 0;
        }
    }

    int full(void){
        if(top == MAX-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void push(int x){
        top++;
        a[top] = x;
    }

    int pop(void){
        int x = a[top];
        top--;
        return x;
    }   

    int peek(void)
    {
        return a[top];
    }

    void display(void){
        for(int i=top; i>=0; i--){
            cout << a[i] << endl;
        }
    }

};

int main(){

    int x ;
    stack s;

    if(!s.full()) s.push(10);
    if(!s.full()) s.push(20);
    if(!s.full()) s.push(30);
    // if(!s.full()) s.push(40);
    // if(!s.full()) s.push(50);

    cout << "stack elements: " << endl;
    s.display();

    if( !s.empty()){
        x = s.pop();
        cout << endl << "Removed: " << x << endl;
    }

    cout << "stack elements: " << endl;
    s.display();

    if(!s.empty())
    {
        x = s.peek();
        cout << endl;
        cout << "Top element is " << x << endl;
    }

    if (s.full())
    {
        cout << " stack is full ";
    }else{
        s.push(x);
    }
    
    cout << "stack elements: " << endl;
    s.display();
    return 0;
}


// //Output :
// PS D:\Chaitanya162> g++ stack_using_array.cpp
// PS D:\Chaitanya162> ./a.exe                  
// stack elements: 
// 30
// 20
// 10

// Removed: 30
// stack elements: 
// 20
// 10

// Top element is 20
// stack elements: 
// 20
// 20
// 10
// PS D:\Chaitanya162> 

