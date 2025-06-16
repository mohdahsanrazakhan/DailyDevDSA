// Naive Approach: Rotate one-by-one
function rotateArr(arr, d) {
    let len = arr.length;
    
    for(let i = 0; i < d; i++) {
        // Store the first element and shift all elements to the left
        let first = arr[0];
        for(let i = 0; i < len; i++) {
            arr[i] = arr[i+1];
        }
        // Place the first element at the end of the array
        arr[len - 1] = first;
    }
}

// Better Approach: Temporary Array
function rotateArr(arr, d) {
    let len = arr.length;
    let temp = [];
    // Handle cases where d is greater than the length of the array
    d %= len;
    
    for(let i = d; i < len; i++) {
        temp[i-d] = arr[i];
    }
    for(let i = 0; i < d; i++) {
        temp[len + i - d] = arr[i];
    }
    for(let i = 0; i < len; i++) {
        arr[i] = temp[i];
    }
}

// Efficient Approach: Using Modulus
function rotateArr(arr, d) {
    let len = arr.length;
    let temp = [];
    d %= len;
    
    // Fill the temporary array with rotated elements
    for(let i = 0; i < len; i++) {
        temp[i] = arr[(i + d) % len];
    }
    for(let i = 0; i < len; i++) {
        arr[i] = temp[i];
    }
}

let arr = [1, 2, 3, 4, 5, 6];
let d = 2;

rotateArr(arr, d);

console.log(arr.join(" "));