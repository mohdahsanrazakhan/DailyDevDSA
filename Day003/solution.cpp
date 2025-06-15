#include <bits/stdc++.h>
using namespace std;

// Naive Approach: Rotate one-by-one
void rotateArr(vector<int>& arr, int d) {
    int size = arr.size();
    
    // Rotate d times
    for(int i = 0; i < d; i++) {
        // first variable hold the first element 
        int first = arr[0];
        for(int j = 0; j < size - 1; j++) {
            arr[j] = arr[j+1];
        }
        arr[size - 1] = first;
    }
}

// Better Approach: Temporary Array
void rotateArr(vector<int>& arr, int d) {
    int size = arr.size();
    vector<int> temp(size); 
    
    // Handle cases where d is greater than size
    d %= size;

    for(int i = d; i < size; i++) {
        temp[i - d] = arr[i]; 
    }
    
    for(int i = 0; i < d; i++) {
        temp[size - d + i] = arr[i];
    }
    
    for(int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

// Efficient Approach: Using Modulus
void rotateArr(vector<int>& arr, int d) {
    int size = arr.size();
    vector<int> temp(size); 

    for(int i = 0; i < size; i++) {
        temp[i] = arr[(i + d) % size];
    }

    for(int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

// Driver Code
int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 3;

    rotateArr(arr, d);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}