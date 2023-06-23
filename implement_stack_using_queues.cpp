#include <queue>

class MyStack {
private:
    std::queue<int> q1;
    std::queue<int> q2;

public:
    /** Pushes element x to the top of the stack. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on the top of the stack and returns it. */
    int pop() {
        // Move elements from q1 to q2 except the last one
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        
        // Retrieve the top element from q1
        int topElement = q1.front();
        q1.pop();
        
        // Swap q1 and q2 to maintain the order
        q1.swap(q2);
        
        return topElement;
    }
    
    /** Returns the element on the top of the stack. */
    int top() {
        return q1.back();
    }
    
    /** Returns true if the stack is empty, false otherwise. */
    bool empty() {
        return q1.empty();
    }
};