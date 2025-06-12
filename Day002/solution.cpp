/* Naive Approach */
#include <bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {

    int i = 0, j = 0, k = 0;
    int s1 = arr1.size();
    int s2 = arr2.size();

    while (j < s1) {
        arr3[i++] = arr1[j++];
    }

    while (k < s2) {
        arr3[i++] = arr2[k++];
    }

    sort(arr3.begin(), arr3.end());
}

/* Optimal Approach */
void mergeArrays(vector<int>& ar1, vector<int>& ar2, vector<int>& ar3) {
    int i = 0, j = 0, k = 0;
    int s1 = ar1.size();
    int s2 = ar2.size();

    while (i < s1 && j < s2) {
        if (ar1[i] < ar2[j]) {
            ar3[k++] = ar1[i++];
        } else {
            ar3[k++] = ar2[j++];
        }
    }

    // Remaining elements in ar1
    while (i < s1) {
        ar3[k++] = ar1[i++];
    }

    // Remaining elements in ar2
    while (j < s2) {
        ar3[k++] = ar2[j++];
    }
}

// Driver code
int main() {
    vector<int> ar1 = {1, 3, 5, 7};
    vector<int> ar2 = {2, 4, 6, 8};
    vector<int> ar3(ar1.size() + ar2.size());

    mergeArrays(ar1, ar2, ar3);
  
    for (int i = 0; i < ar3.size(); i++)
        cout << ar3[i] << " ";

    return 0;
}