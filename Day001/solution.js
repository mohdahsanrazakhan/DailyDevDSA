// Approach 1
function check(arr)
{
    let count = 0;
    let size = arr.length;
    
    for(let i = 0; i < size; i++) {
        if(arr[i] > arr[(i+1)%size])
            count++;
    }
    return count <= 1;
}

// Driver Code
const arr = [ 3, 4, 5, 1, 2 ];

if (check(arr)) {
    console.log("YES");
}
else {
    console.log("NO");
}