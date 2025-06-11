// Approach 1
#include <bits/stdc++.h>
using namespace std;

// Function to check if arr[] is rotated and sorted
bool check(vector<int>& arr, int n)
{
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > arr[(i+1) % n])
            count++;
    }
    return count <= 1;
}

// Driver Code
int main()
{
    vector<int> arr = { 3, 1, 5, 1, 2 }; 

    int n = arr.size();

    if (check(arr, n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}