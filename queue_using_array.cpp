#include<iostream>
#define MAX 5
using namespace std;

class queue{
    private:
    int a[MAX];
    int front; 
    int rear;

    public:
    queue(){
        front = -1;
        rear = -1;
    }

    int empty(){
        if(rear == -1 && front == -1){
            return 1;
        }else{
            return 0;
        }
    }

    int full(){
        if (rear = MAX - 1){
        return 1;}
        else{
        return 0;}
    }

    int enqueue(int x){
        if (front == -1 && rear == -1){
            front++;
            rear++;
        }else{
            rear++;
        }     
        a[rear] = x;
    }

    int dequeue(){
        int x = a[front];

        if (front == rear ){
            front = -1;
            rear = -1;
        }else{
            front++;
        }
    
         return x;
    }
    
      int peek ()
        {
            return (a[front]);
        }


     void display(void){
            for (int i=front; i<=rear; i++){
                cout << "\t" <<a[i];
            }
        }
};

int main(){
    queue q;
    int x;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();

    cout << endl;

    if (!q.empty()) q.dequeue();
    q.display();
     cout << endl;

    q.peek();
    q.display();


    return 0;
}

// Output:-
// PS D:\Chaitanya162> g++ queue_using_array.cpp
// PS D:\Chaitanya162> ./a.exe                  
//         10      20      30      40
//         20      30      40
//         20      30      40
// PS D:\Chaitanya162> 