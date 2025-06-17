## 📄 Day 04: Remove Duplicates from Sorted Array

### 🧩 Problem Statement

Given a **sorted array** `arr[]` of size `n`, the task is to rearrange the array such that all **distinct elements** appear at the beginning in **sorted order**.  
Return the **length** of this distinct subarray.

> ⚠️ The elements **after** the distinct part can be anything. They are not considered part of the result.

---

### 🔍 Examples

**Example 1:**

```
Input: arr[] = [2, 2, 2, 2, 2]
Output: [2]
```
Explanation: All elements are the same, so only one instance of 2 is retained.

**Example 2:**

```
Input: arr[] = [1, 2, 2, 3, 4, 4, 4, 5, 5]
Output: [1, 2, 3, 4, 5]
```

**Example 3:**

```
Input: arr[] = [1, 2, 3]
Output: [1, 2, 3]
```
Explanation: No change needed since all elements are already distinct.

---

### 💡 Approaches

#### 🔸 Using Hash Set (Works for Unsorted Arrays Too)

- Create a Hash Set to store unique elements.
- Traverse the array, and if an element is not in the set, insert it and place it at the current result index.
- This works for **both sorted and unsorted** arrays.

#### ⏱️ Time & Space Complexity
**Time Complexity:** `O(n)`  
**Space Complexity:** `O(n)`

---

#### ⚡ Expected Approach (Optimized for Sorted Arrays)

Since the array is **already sorted**, duplicates will appear **consecutively**, so we don’t need extra space.

**Algorithm:**

1. Initialize `idx = 1` (the index where next unique element should be placed).
2. Traverse the array from index `1` to `n - 1`.
3. If `arr[i] != arr[i - 1]`, place `arr[i]` at `arr[idx]` and increment `idx`.
4. After the loop, the first `idx` elements will be unique.


#### ⏱️ Time & Space Complexity
**Time Complexity:** `O(n)`  
**Space Complexity:** `O(1)`

---

#### ✅ Recommended For

- Practicing in-place array modification  
- Understanding two-pointer or index-based techniques  
- Space optimization in problems with sorted data
