

#include <iostream>
#include <queue>
using namespace std;



struct Node{

    int data;
    Node* left;
    Node* right;

    Node(int value): data(value),left(nullptr),right(nullptr){}


};



class binary_tree{

private:

    Node* root;
    
    void inorder(Node* node){
        
        
        
        if(!node) return;
        
        inorder(node->left);
        
        cout << node->data << " ";
        
        inorder(node->right);
        
        
        
        
    }
    
    
    void preorder(Node* node){
        
        
        if(!node) return;
        
        cout<< node->data << " ";
        
        preorder(node->left);
        preorder(node->right);
        
        
        
        
        
    }
    
    void postorder(Node* node){
        
        if(!node) return;
        postorder(node->left);
        postorder(node->right);
        cout<< node->data<<" ";
        
    }
    
    
    void delete_tree(Node *node){
        
        
        if(!node)  return;
        
        delete_tree(node->left);
        delete_tree(node->right);
        
        delete node;
        
        
    }



public:

    binary_tree(): root(nullptr){};
    
    
    
    void insert(int value){
        
        
        if(!root){
            root = new Node(value);
            return;
        }
        
        Node* current = root;
        
        while (true) {
            
            if(value < current->data){
                if(!current->left){
                    
                    current->left = new Node(value);
                    
                    return;
                    
                }
                
                current = current->left;
            }
            
            else{
                
                if(!current->right){
                    current->right = new Node(value);
                    return;
                }
                
                current = current->right;
            }
            
            
            
        }
        
        
    }

    void inorder_traversal(){
        
        
        inorder(root);
        
        cout << endl;
        
        
        
    }


    void preorder_traversal(){
        
        
        
        preorder(root);
        
        cout << endl;
    }

    
    void postorder_traversal(){
        
        
        postorder(root);
        cout << endl;
    }




    ~binary_tree(){
        
        
        delete_tree(root);
    }







};


int main(){


    binary_tree b;

    b.insert(10);
    b.insert(12);
    b.insert(3);
    b.insert(6);
    b.insert(1);
    b.insert(9);
    b.insert(5);
    b.insert(7);
    
    
    
    
    cout<<"inorder traversal: " ;
    b.inorder_traversal();
    cout<< endl;
    
    // For demonstration purposes, I'm adding the other traversal methods
        cout << "preorder traversal: ";
        b.preorder_traversal();
        cout << endl;

        cout << "postorder traversal: ";
        b.postorder_traversal();
        cout << endl;


    return 0;




}




