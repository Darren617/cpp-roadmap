#include<iostream>
using namespace std;




class MinStack {
private:
    struct stack{
        int data;
        int min;
        stack*  next;

        stack(int x,int y):data(x),min(y),next(nullptr){}

    };
    stack *head;

public:
    MinStack() {
        head=nullptr;
    }
    
    void push(int value) {
        if(head==NULL){
            head=new stack(value,value);
        }else{
            int tmp=value>head->min? head->min:value;
            stack *cur=new stack(value,tmp);
            cur->next=head;
            head=cur;
        }
    }
    
    void pop() {
        head=head->next;
    }
    
    int top() {
        return head->data;
    }
    
    int getMin() {
        return head->min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */