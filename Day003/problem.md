## 📄 📄 Day 03: Rotate an Array by `d` (Counterclockwise / Left)

### 🧩 Problem Statement

Given an array of integers `arr[]` of size `n`, rotate the array to the **left** by `d` positions (counterclockwise).  
The rotation should be performed **in-place** if possible.


---

### 🔍 Examples

**Example 1:**

```
Input: arr[] = {1, 2, 3, 4, 5, 6}, d = 2
Output: {3, 4, 5, 6, 1, 2}
```

**Example 2:**

```
Input: arr[] = {1, 2, 3}, d = 4
Output: {2, 3, 1}
```

---

### 💡 Approaches

#### 🔸 Naive Approach: Rotate One-by-One

- Rotate the array left by one position `d` times.
- Each rotation involves shifting all elements to the left by one and moving the first element to the end.

#### ⏱️ Time & Space Complexity
* **Time Complexity:** `O(n × d)`  
* **Space Complexity:** `O(1)`

---

#### 🔹 Better Approach: Temporary Array

- Store the rotated version in a temporary array.
- First copy elements from index `d` to `n-1`.
- Then copy elements from index `0` to `d-1`.
- Copy the temporary array back to the original.

#### ⏱️ Time & Space Complexity
* **Time Complexity:** `O(n)`  
* **Space Complexity:** `O(n)`

#### ⚡ Approach 1: Juggling Algorithm

- Rotate elements in cycles based on the **GCD of `n` and `d`**.
- For each cycle, move elements using the formula:  
  `new_index = (current_index + d) % n`

#### ⏱️ Time & Space Complexity
* **Time Complexity:** `O(n)`  
* **Space Complexity:** `O(1)`

---

#### ⚡ Approach 2: Reversal Algorithm

- Reverse the first `d` elements.
- Reverse the remaining `n - d` elements.
- Reverse the entire array.

#### ⏱️ Time & Space Complexity
* **Time Complexity:** `O(n)`  
* **Space Complexity:** `O(1)`

---

#### ✅ Recommended For

- Practicing array manipulation techniques  
- Understanding in-place algorithms  
- Learning optimal rotations using reversal and juggling methods
