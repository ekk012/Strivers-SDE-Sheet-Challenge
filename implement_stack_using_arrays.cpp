#include <iostream>

class Stack {
private:
    int* arr;    // Array to store stack elements
    int capacity; // Maximum capacity of the stack
    int top;     // Index of the top element in the stack

public:
    // Constructor to initialize the stack
    Stack(int stackCapacity) {
        capacity = stackCapacity;
        arr = new int[capacity];
        top = -1; // Stack is initially empty
    }

    // Destructor to free dynamically allocated memory
    ~Stack() {
        delete[] arr;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to check if the stack is full
    bool isFull() {
        return top == capacity - 1;
    }

    // Function to push an element into the stack
    void push(int element) {
        if (isFull()) {
            std::cout << "Stack Overflow: Cannot push element " << element << ". Stack is full." << std::endl;
            return;
        }

        arr[++top] = element;
        std::cout << "Pushed element " << element << " into the stack." << std::endl;
    }

    // Function to pop an element from the stack
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow: Cannot pop element. Stack is empty." << std::endl;
            return;
        }

        int poppedElement = arr[top--];
        std::cout << "Popped element " << poppedElement << " from the stack." << std::endl;
    }

    // Function to get the top element of the stack
    int getTop() {
        if (isEmpty()) {
            std::cout << "Stack is empty." << std::endl;
            return -1;
        }

        return arr[top];
    }
};

// Driver code
int main() {
    Stack stack(5); // Create a stack with a capacity of 5

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element of the stack: " << stack.getTop() << std::endl;

    stack.pop();
    stack.pop();

    std::cout << "Top element of the stack: " << stack.getTop() << std::endl;

    return 0;
}
