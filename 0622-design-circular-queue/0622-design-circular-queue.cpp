class MyCircularQueue {
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    MyCircularQueue(int k) {
        size = k + 1; // Increase size by 1 to distinguish between empty and full condition
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        else {
            rear = (rear + 1) % size;
            arr[rear] = value;
            return true;
        }
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        else {
            front = (front + 1) % size;
            return true;
        }
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }
        else {
            return arr[(front + 1) % size];
        }
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        else {
            return arr[rear];
        }
    }

    bool isEmpty() {
        return front == rear;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }
};
