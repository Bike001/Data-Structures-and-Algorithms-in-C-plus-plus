

//https://neetcode.io/problems/singlyLinkedList




class Node{
    
public:
    int data;
    Node* next;
    
    Node(int data): data(data), next(nullptr){}
    
    
};

class LinkedList {
    
private:
    
    Node* head;
    
    
public:
    
    LinkedList() {
        head =  nullptr;
    }
    
    
    int get(int index) {
        
        
        Node* curr = head;
        
        int i = 0;
        
        while(curr != nullptr  && i < index){
            
            curr = curr -> next;
            i++;
            
        }
        
        return (curr != nullptr) ? curr->data : -1;
    }
    
    
    void insertHead(int val) {
        
        
        Node* newnode = new Node(val);
        newnode->next = head;
        head = newnode;
        
        
    }
    
    void insertTail(int val) {
        
        Node* newnode = new Node(val);
        if (head == nullptr) {
            head = newnode;
            return;
        }
        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newnode;
        
        
    }
    
    bool remove(int index) {
        
        if (index < 0 || head == nullptr) return false;
        if (index == 0) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return true;
        }
        Node* curr = head;
        Node* prev = nullptr;
        int i = 0;
        while (curr != nullptr && i < index) {
            prev = curr;
            curr = curr->next;
            i++;
        }
        if (curr != nullptr && prev != nullptr) {
            prev->next = curr->next;
            delete curr;
            return true;
        }
        return false;
        
    }
    
    vector<int> getValues() {
        
        vector <int> value;
        Node* curr = head;
        
        while(curr != nullptr){
            
            value.push_back(curr->data);
            curr = curr->next;
            
        }
        
        return value;
        
    }
};










