## 📄 Day 01: Check if an Array is Sorted and Rotated

### 🧩 Problem Statement

Given an array `arr[]` of size `n`, the task is to determine if the array was **originally sorted in non-decreasing order** and then **rotated** (including zero rotations). Return `true` if it is, otherwise return `false`.
The array may contain **duplicates**.

---

### 🔍 Examples

**Example 1:**

```
Input:  arr[] = {3, 4, 5, 1, 2}
Output: YES

Explanation:
The original sorted array is {1, 2, 3, 4, 5}.
Rotated 3 times clockwise, we get: {3, 4, 5, 1, 2}
```

**Example 2:**

```
Input:  arr[] = {3, 4, 6, 1, 2, 5}
Output: NO

Explanation:
This array cannot be a rotated version of any sorted non-decreasing array.
```

---

### 💡 Approach 1

* An array is **sorted and rotated** if:

  * It has **at most one** point where the order breaks (i.e., `arr[i] > arr[i+1]`).
  * For a rotated array, this break will exist **only once** in the circular traversal.

* Traverse the array and count the number of such breaks:

  * For `i = 0` to `n-1`, check if `arr[i] > arr[(i+1)%n]`
  * If count > 1 → return `false`
  * Else → return `true`

---

### ⏱️ Time & Space Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)
