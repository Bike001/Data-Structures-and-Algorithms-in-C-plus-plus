

#include <iostream>
#include <vector>
using namespace std;







class priority_queue{

private:
    
    vector<int> data;
    
    int parent(int i){return(i-1)/2;}
    int left(int i){return 2*i+1;}
    int right(int i){return 2*i+2;}
    
    
    void sift_up(int i){
        
        while(i !=0 && data[parent(i)] < data[i]){
            
            swap(data[parent(i)], data[i]);
            i = parent(i);
        }
    }
        
    void sift_down (int i){
            
        int max_index = i;
        int l = left(i), r = right(i);
        if (l < data.size() && data[l] > data [i]){
            
            max_index = l;
            }
        if (r < data.size() && data[r] > data[l]){
            
            max_index = r;
                  
        }
        
        if(i != max_index){
            swap(data[i], data[max_index]);
            
            
            sift_down(max_index);
        }
        }
        
        
        
    
    
    
    
    
public:
    
    int top() const{
        if (data.empty()){
            
            throw runtime_error("queue is empty");}
        
        return data[0];
        
        
    }
    
    void push(int value) {
          data.push_back(value);
          sift_up( data.size() - 1);
      }
    
    void pop (){
        
        if(data.empty()) throw runtime_error("Queue is empty");
        data[0] = data.back();
        data.pop_back();
        sift_down(0);
        
        
        
        
        
    }
    
    
    
  
            

    
    
};
int main(){
    
    
    priority_queue s;
    s.push(10);
    s.push(9);
    s.push(100);
    cout << s.top() << endl;
    
    s.pop();
    
    cout << s.top() << endl;
   
 

    return 0;
    
    
    
    
}
