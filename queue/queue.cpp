

#include <iostream>
using namespace std;


template <typename T>

struct Node{
    
    T data;
    Node* next;
    
    
};


template <typename T>
class queue{
private:
    Node<T>* front;
    Node<T>* rear;
public:
    
    queue(): front(nullptr), rear(nullptr){}
    
    void enqueue (T newdata){
        
        Node<T>* newNode = new Node<T>;
        newNode -> data = newdata;
        if (rear){
            
            rear->next = newNode;
        }
        else{
            
            front = newNode;
        }
        
        rear = newNode;
        
    }
    
    void dequeue (){
        
        
        if (front == nullptr ){
            cout <<" queue is empty" << endl;
            return;
            
        }
        
        Node<T>* temp = front;
        front = front->next;
        
        if(!front){
            
            
            rear = nullptr;
            
        }
        
        delete temp;
        
        
        
    }
    
    
    
    
    
    
            
    void print (){
        
        Node<T>* temp = front;
        
        while(temp){
            
            
            cout << temp -> data <<" ";
            
            temp = temp -> next;
            
            
            
            
            
            
        }
        
        cout << endl;
    }
        
       
        
    ~queue(){
        
        while(front){
            Node<T>* temp = front;
            
            front = front -> next;
            
            delete temp;
            
            
            
        }
        
        
    };
        

    
    
};
int main(){
    
    
    queue <int> s;
    s.enqueue(10);
    s.enqueue(9);
    s.print();
    s.dequeue();
    s.dequeue();
    s.print();
   
 
    s.enqueue(11111);
    s.print();


    return 0;
    
    
    
    
}
