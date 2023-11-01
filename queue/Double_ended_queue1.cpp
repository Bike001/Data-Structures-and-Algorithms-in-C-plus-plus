

#include <iostream>

using namespace std;




class MyCircularDeque {

private:
int *arr;
int count = -1;
int *temp;
int k;
public:
    MyCircularDeque(int k) : k(k)   {
        arr = new int [k];
    }
    
    bool insertFront(int value) {
        if (isFull()){
            return false;
        }

        if (isEmpty()){

            arr[0] = value;
            count++;
            return true;
        }
        
        temp = new int[k];
        temp[0] = value;
        for(int i=0; i < count+1; i++){
            
            temp[i+1] = arr[i];
            
            

        }

        for(int i=0; i < count +2; i++){
            
            arr[i] = temp[i];
            
           
        }
        count ++;
        
        
        
        

        delete[] temp;

        return true;

    }



    
    bool insertLast(int value) {

        if (isEmpty()){
            arr[0] = value;
            count++;
            return true;
        }

        if (isFull()){
            return false;
        }

        count++;
        arr[count] = value;
        
        return true;

    
        



    }
    
    bool deleteFront() {

        if (isEmpty()){
           
            return false;
        }

         temp =  new int [count+1];


        for(int i=0; i<count; i++){
           temp[i] = arr[i+1];

        }
         
         for(int i=0; i< count -1; i++){
           arr[i] = temp[i];

        }
        count --;
        return true;

        
    }
    
    bool deleteLast() {
         
          if (isEmpty()){
           
            return false;
        }

        temp = new int[count+1];

        for(int i=0; i<count -1; i++){
           temp[i] = arr[i];

        }
         
         for(int i=0; i< count -1; i++){
           arr[i] = temp[i];

        }
        count --;
        
        delete [] temp;
        return true;
    }
    
    int getFront() {
        
        

        return (arr[0]);
        
    }
    
    int getRear() {

       
        
        
        return (arr[count]);
        
        
        
        
        
        
    }
    
    bool isEmpty() {
        if (count < 0){

            return true;
        }
        else{

            return false;
        }

    }
    
    bool isFull() {

        if (count == k -1 ){
            return true;
        }
        else{
            return false;
        }

        
    }

    ~MyCircularDeque() {
    delete[] arr;
}
};

int main(){
    
    MyCircularDeque myCircularDeque(3);
    cout << myCircularDeque.insertLast(1) << endl; // return True
    cout <<myCircularDeque.insertLast(2)<< endl;  // return True
    cout << myCircularDeque.insertFront(3)<< endl; // return True
    cout << myCircularDeque.insertFront(4)<< endl; // return False, the queue is full.
    
    cout <<myCircularDeque.getRear()<< endl;
       // return 2
    cout << myCircularDeque.isFull()<< endl;       // return True
    cout <<myCircularDeque.deleteLast()<< endl;   // return True
    cout <<myCircularDeque.insertFront(4)<< endl; // return True
    cout <<myCircularDeque.getFront()<< endl;    // return 4
    
    
    
    
    
    
    return 0;
    
    
    
    
    
    
}










