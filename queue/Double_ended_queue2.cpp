//https://leetcode.com/problems/design-circular-deque/solutions/4237501/my-solution-is-easy-to-understand/




class MyCircularDeque {
private:
    int *arr;
    int front, rear,  size;

public:
    MyCircularDeque(int k) :  front(-1), rear(-1),  size(k) {

      arr = new int[size];
       
    }
    
    bool insertFront(int value) {
        if (isFull()) return false;
        if (front == -1 & rear == -1){
            front = 0;
            rear ++;
            arr[front] = value;
            return true;
        }
        front = ((front-1+size)%size);
        arr[front] = value;
        
        return true;
    }
    
    bool insertLast(int value) {
        if (isFull()) return false;
        if (front == -1 & rear == -1){
            rear ++;
            front ++;
            arr[rear] = value;
            return true;
        }
        rear = (rear + 1) % size;
        arr[rear] = value;
        
        
        return true;
    }
    
    bool deleteFront() {
        if (isEmpty()) return false;
        if (front == rear ){
            front = -1;
            rear = -1;
            return true;
        }
        else{

            front = (front + 1 + size) % size;
        }
        
        return true;
    }
    
    bool deleteLast() {
        if (isEmpty()) return false;
        if (front == rear ){
            front = -1;
            rear = -1;
            return true;
        }
        else{
        rear = (rear - 1 + size) % size;
        }
        
        return true;
    }
    
    int getFront() {
        return isEmpty() ? -1 : arr[front];
    }
    
    int getRear() {
        return isEmpty() ? -1 : arr[rear];
    }
    
    bool isEmpty() {
        return (front == -1 && rear == -1);
    }
    
    bool isFull() {

        if ((rear +1) % size == front)
        return true;
        else
        return false;
    }
    
    ~MyCircularDeque(){
        delete[] arr;
    }

};


