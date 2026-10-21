#include<iostream>
#include<cmath>
#include<cctype>
using namespace std;

class stack{
    private:
    int arr[100];
    int top;
    
    public: 
    stack(){
        top = -1;
    }
    void push(int val){
        top++;
        arr[top] = val;
    }
    int pop(){
        int p = arr[top];
        top--;
        return(p);
    }
};

int evaluate(char x,int op1, int op2)
{
    if(x == '+')
    return(op1 + op2);

    if (x == '-')
    return(op1 - op2);

    if (x == '*')
    return (op1 * op2);

    if (x == '/')
    return (op1 / op2);
    
    if( x == '$')
    return (pow(op1,op2));

    return 0;
}


int main(void){
    stack s;
    char x;
    int op1,op2,val;
    
    cout << endl << "Enter postfix expression:";
    
    while ((x = getchar()) != '\n')
    {
        if (isdigit(x))
        {
            s.push(x - 48);
        }
        else{
            op2 = s.pop();
            op1 = s.pop();

            val  = evaluate(x,op1,op2);
            
            s.push(val);
        }
    }
    val = s.pop();
    cout << endl << "Answer = " << val;
    return 0;

}

// Output :- 

// PS D:\Chaitanya162> g++ postfix_expression.cpp
// PS D:\Chaitanya162> ./a.exe                   

// Enter postfix expression:576/98*-98+-687

// Answer = 7
// PS D:\Chaitanya162> ./a.exe

// Enter postfix expression:578/58*-6897+/887$8576-*+/

// Answer = 161319
// PS D:\Chaitanya162> 
