## 📄 Day 02: Merge two sorted arrays

### 🧩 Problem Statement

Given two **sorted arrays**, the task is to merge them in **a single sorted manner**.

---

### 🔍 Examples

**Example 1:**

```
Input:  
arr1[] = { 1, 3, 4, 5}
arr2[] = {2, 4, 6, 8} 

Output: 
arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}
```

**Example 2:**

```
Input:  
arr1[] = { 5, 8, 9}
arr2[] = {4, 7, 8}

Output: 
arr3[] = {4, 5, 7, 8, 8, 9} 
```

---

### 💡 Approaches

#### 🔸 Naive Approach: Concatenate and Sort

* **Steps:**

  1. Combine both arrays into a new array.
  2. Sort the resulting array.

#### ⏱️ Time & Space Complexity
* **Time Complexity:** O((n1 + n2) × log(n1 + n2))
* **Space Complexity:** O(1) (in-place sort)

---

#### 🔹 Optimal Approach: Merge Process (Like in Merge Sort)

* **Steps:**

  1. Create a new array `arr3[]` of size `n1 + n2`.
  2. Use two pointers to traverse `arr1[]` and `arr2[]`.
  3. At each step, compare elements and pick the smaller one.
  4. If any array still has remaining elements, append them to `arr3[]`.

#### ⏱️ Time & Space Complexity
* **Time Complexity:** O(n1 + n2)
* **Space Complexity:** O(n1 + n2)

---

#### ✅ Recommended For

* Understanding merge process in **Merge Sort**
* Practice with **two-pointer** technique
* Sharpening basic array manipulation skills
