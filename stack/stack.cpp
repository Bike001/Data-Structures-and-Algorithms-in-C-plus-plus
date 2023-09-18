

#include <iostream>
using namespace std;


template <typename T>

struct Node{
    
    T data;
    Node* next;
    
    
};


template <typename T>
class stack{
private:
    Node<T>* top;
public:
    
    stack(): top(nullptr){}
    
    void push (T newdata){
        
        Node<T>* newNode = new Node<T>;
        newNode -> data = newdata;
        newNode -> next = top;
        top = newNode;
        
        
        
    }
    
    void pop (){
        
        
        if (top == nullptr ){
            cout <<" stack is empty" << endl;
            return;
            
        }
        
        Node<T>* temp = top;
        top = top->next;
        
        delete temp;
        
        
        
    }
    
    
    
    void peek (T data){
        
        if (top == nullptr || top ->data != data)
            cout <<" no such data at the top of the stack" << endl;
            
        
        else
            cout <<"data found" << top -> data << endl;

        
    }
    
    
    
            
    void print (){
        
        Node<T>* temp = top;
        
        while(temp){
            
            
            cout << temp -> data <<" ";
            
            temp = temp -> next;
            
            
            
            
            
            
        }
        
        cout << endl;
    }
        
       
        
    ~stack(){
        
        while(top){
            Node<T>* temp = top;
            
            top = top -> next;
            
            delete temp;
            
            
            
        }
        
        
    };
        

    
    
};
int main(){
    
    
    stack <int> s;
    s.push(10);
    s.push(9);
    s.print();
    s.pop();
    s.print();
    s.peek(10);
    s.print();
    s.push(11111);
    s.print();


    return 0;
    
    
    
    
}
