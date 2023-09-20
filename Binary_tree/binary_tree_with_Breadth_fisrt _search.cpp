

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



public:

    binary_tree(): root(nullptr){};

    void insert(int value){

        if(root == nullptr){

            root = new Node(value);

            return;
        }



        queue <Node*> q;
        q.push(root);

        while(!q.empty() ){

            Node* current = q.front();
            q.pop();

            if(!current->left){

                current->left = new Node(value);
                return;
            }
            else{
                q.push(current->left);
            }

            if(!current->right){

                current->right = new Node(value);
                return;
            }
            else{
                q.push(current->right);
            }



        }
    }

        void lever_order_traversal(){

            if ( !root){

                return;
            }

            queue <Node*> q;
            q.push (root);

            while(!q.empty()){

                Node* current = q.front();
                cout << current->data << " ";
                q.pop();

                if(current->left) q.push(current->left);
                if(current->right) q.push(current->right);


            }



        }

    ~binary_tree(){


        if(!root){
            return;
        }

        queue <Node*> q;
        q.push(root);

        while(!q.empty()){

            Node* current = q.front();
            q.pop();

            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
            delete current;



        }







    }








};


int main(){


    binary_tree b;

    for (int i = 1; i <= 10; i++) {
            b.insert(i);
        }

    cout<<"level-order traversal: " ;
    b.lever_order_traversal();
    cout<< endl;



    return 0;




}




