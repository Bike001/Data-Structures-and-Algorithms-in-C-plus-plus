#include <iostream>
using namespace std;

//class node{
//public:
//    int info;
//    node* next;
//    node(int data): info(data), next(nullptr){}
//};

struct node{

    int info;
    node* next;
   
};


class linkedlist{
    
private:
    
    node* head;
    
public:
    linkedlist():head(nullptr){}
    void push(int new_data){
        node* new_node = new node;
        new_node -> info = new_data;
        new_node -> next = head;
        head = new_node;
                
    }
    void insertend(int new_data){
        
        node* new_node = new node;
        new_node -> info = new_data;
        if (head == nullptr){
            head = new_node;
            return;
            
        }
        
        node* temp = head;
        while (temp->next != nullptr){
            
            temp = temp->next;
            
        }
        
        temp->next = new_node;
    }
    
};






int main(){
    
    
    
    
    
    
    return 0;
}
