package data_structures.queues.queue_using_stacks;

import java.util.Stack;

public class Queue {
    Stack<Integer> queueStack = new Stack<>();
    // rev stack
    Stack<Integer> revStack = new Stack<>();

    public void push(int x) {
        if (this.queueStack.size() == 0) {
            this.queueStack.push(x);
        } else {
            while (this.queueStack.size() != 0) {
                this.revStack.push(this.queueStack.pop());
            }
            this.revStack.push(x);
            while (this.revStack.size() != 0) {
                this.queueStack.push(this.revStack.pop());
            }
        }
    }

    public Integer pop() {
        if (this.queueStack.size() > 0) {
            return this.queueStack.pop();
        } else {
            return null;
        }

    }


    public Integer peek() {
        if (this.queueStack.size() > 0) {
            return this.queueStack.get(this.queueStack.size() - 1);
        } else {
            return null;
        }
    }

    public boolean empty() {
        return this.queueStack.size() == 0;
    }

    public static void main(String[] args) {
        Queue myQueue = new Queue();
        myQueue.push(10);
        myQueue.push(20);
        myQueue.push(30);
        System.out.println("queue: "+myQueue.queueStack);
        System.out.println("peek: "+myQueue.peek());
        System.out.println("pop: "+myQueue.pop());
        System.out.println("queue: "+myQueue.queueStack);
        System.out.println("peek: "+myQueue.peek());
        System.out.println("is queue empty: "+myQueue.empty());
    }
}
