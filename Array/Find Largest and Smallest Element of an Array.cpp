//This is a C++ Program to Find the Largest and Smallest Elements in an Array.
//
//Problem Description
//The program takes an array and prints the largest and smallest element in the array.
//
//Problem Solution
//1. The program takes an array of elements.
//2. Using a for loop, the largest and smallest element is found.
//3. The result is printed.
//4. Exit.



#include <iostream>
using namespace std;

int main() {
    
    
    
    int arr[10], n, i, max, min;
    
    cout<< "Enter the size of array less than 10" << endl;
    cin >> n;
    while  (n > 10){
        
        cout << "Enter the size of array less than 10 " << endl;
    }
    
    cout << "Enter the elements of array " << endl;
    
    for(i=0; i< n; i++){
        
        cin >> arr[i];
        
    }
    
    cout << "print the array" << endl;
    for (i=0; i< n; i++){
        
        cout << arr[i] <<" " << endl;
        
    }
    
    max = arr[0];
    for (i=0; i< n; i++){
        
        if (max < arr[i])
            max = arr[i];
        
    }
    
    cout << " the max number is " << max << endl;
    
    min = arr[0];
    for (i=0; i< n; i++){
        
        if (min > arr[i])
            max = arr[i];
        
    }
    
    cout << " the min number is " <<min << endl;
    
    return 0;
    
    
    
}
