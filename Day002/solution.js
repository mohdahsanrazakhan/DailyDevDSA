/* Naive Approach */
function mergeArrays(arr1, arr2)  {
    let i = 0;
    let arr3 = [];
    
    for(const a1 of arr1) {
        arr3[i++] = a1;
    }
    
    for(const a2 of arr2) {
        arr3[i++] = a2;
    }
    
    return arr3.sort();
}

/* Optimal Approach */
function mergeArrays(ar1, ar2) {
    let i = 0, j = 0, k = 0;
    let s1 = ar1.length;
    let s2 = ar2.length;
    let ar3 = [];
    
    while(j < s1 && k < s2) {
        if(ar1[j] > ar2[k]) {
            ar3[i++] = ar2[k++];
        } else {
            ar3[i++] = ar1[j++];
        }
    }
    
    while(j < s1) {
        ar3[i++] = ar1[j++];
    }
    
    while(k < s2) {
        ar3[i++] = ar2[k++];
    }
    
    return ar3
}

// Driver code
let arr1 = [1, 3, 5, 7];
let arr2 = [2, 4, 6, 8];
let arr3 = mergeArrays(arr1, arr2);

console.log(arr3.join(" "));