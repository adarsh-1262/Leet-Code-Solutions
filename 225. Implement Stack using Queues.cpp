// 225. Implement Stack using Queues
// Solution:

// CODE:
class MyStack {
private:
    queue<int> q;

public:
    MyStack() {
        
    }
    
    void push(int x) {
        // Get the current size of the queue
        int n = q.size();
        // Add the new element to the back of the queue
        q.push(x);
        // Rotate the queue so that the new element is at the front
        for (int i = 0; i < n; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        // Retrieve the top element from the front of the queue
        int top_element = q.front();
        // Remove the top element from the queue
        q.pop();
        return top_element;
    }
    
    int top() {
        // Return the top element without removing it
        return q.front();
    }
    
    bool empty() {
        // Check if the queue is empty
        return q.empty();
    }
};
