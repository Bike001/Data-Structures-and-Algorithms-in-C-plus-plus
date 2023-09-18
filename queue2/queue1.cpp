

#include <iostream>
using namespace std;

struct Node{
    
    int data;
    Node* next;
    
    
};

class linked_list{
private:
    Node* head;
public:
    
    linked_list(): head(nullptr){}
    
    void prepend (int newdata){
        
        Node* newNode = new Node;
        newNode -> data = newdata;
        newNode -> next = head;
        head = newNode;
        
        
        
    }
    
    void append (int newdata){
        
        Node* newNode = new Node;
        newNode -> data = newdata;
        newNode -> next = nullptr;
        
        if(!head){
            head = newNode;
            return;
            
        }
        
        Node* current = head;
        while(current->next){
            
            current = current->next;
            
        }
        
        current -> next = newNode;

        
    }
    
    
    void remove (int value){
        
        Node* current = head;
        
        if (!head) return;
        if(head->data == value){
            
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
            
            
        }
        
        while(current -> next){
            if( current -> next -> data == value){
                Node* temp = current -> next;
                current -> next = current-> next -> next;
                
                delete temp;
                
                
                
            }
            current = current->next;

        }
        
        
       
        
        
        
        
    }
    
    
    void insert_after(int value, int newdata){
        
                
        
        Node* current = head;
        
        while(current){
            
            if(current -> data == value){
                
                Node* newNode = new Node;
                newNode->data = newdata;
                newNode->next = current->next;
                current-> next = newNode;
                
                
                
            }
            
            current = current->next;
            
            
        }
        
        
        
    }
    
    void print(){
        
        Node* current = head;
        
        while(current){
            
            cout << current->data <<"->";
            current = current->next;
            
        
            
            
        }
        
        cout <<"NULL" << endl;
        
        
        
    }
    
    
};
int main(){
    
    
    linked_list list;
    list.append(10);
    list.append(30);
    list.append(20);
    list.print();
    list.prepend(300);
    list.print();
    list.remove(30);
    list.print();
    list.insert_after(300, 15);
    list.print();
    
    list.insert_after(10, 15);
    list.print();


    return 0;
    
    
    
    
}
