# 20-Sorting-Algorithms
## Overview

This repository contains implementations of three popular sorting algorithms written in C++:
1. **Bubble Sort**
2. **Selection Sort**
3. **Insertion Sort**

Sorting is a fundamental operation in computer science and is widely used in many algorithms and systems, such as searching, data analysis, and data structures like priority queues. Efficient sorting is crucial for optimizing performance in tasks involving large datasets. This repository serves as a simple reference for understanding and implementing basic sorting techniques, with each algorithm offering different approaches, advantages, disadvantages, and use cases.

## Sorting Algorithms

### 1. Bubble Sort

**Description:**

Bubble Sort is a simple, comparison-based algorithm. It repeatedly traverses the list, compares adjacent elements, and swaps them if they are in the wrong order. During each pass, the largest unsorted element "bubbles up" to its correct position at the end of the array. The process continues until no swaps are needed, indicating the array is sorted.

**Algorithm:**
1. Start from the first element and compare it with the next one.
2. If the current element is larger than the next element, swap them.
3. Move to the next adjacent pair and repeat the comparison.
4. After each pass, the largest unsorted element reaches its correct position.
5. Continue until the entire array is sorted.

**Time Complexity:**
- Worst Case: O(n²)
- Best Case: O(n) (when the array is already sorted)
- Average Case: O(n²)

**Space Complexity:** O(1)

**Advantages:**
- Simple to understand and easy to implement.
- Best suited for small or nearly sorted datasets.
- Stable sort (preserves the order of equal elements).

**Disadvantages:**
- Very inefficient for large datasets due to O(n²) time complexity.
- Makes unnecessary comparisons even when the array is already sorted (without optimization).

**Use Cases:**
- Teaching and explaining the concept of sorting.
- Useful in small datasets or cases where data is almost sorted.

---

### 2. Selection Sort

**Description:**

Selection Sort divides the array into a sorted and unsorted portion. It repeatedly selects the smallest element from the unsorted part and swaps it with the first unsorted element. The boundary between the sorted and unsorted parts moves one element to the right with each iteration until the entire array is sorted.

**Algorithm:**
1. Set the first element as the minimum.
2. Iterate through the unsorted part to find the smallest element.
3. Swap the smallest element with the first element of the unsorted part.
4. Move the boundary of the sorted portion one element to the right.
5. Repeat until the array is sorted.

**Time Complexity:**
- Worst Case: O(n²)
- Best Case: O(n²)
- Average Case: O(n²)

**Space Complexity:** O(1)

**Advantages:**
- Performs well in scenarios where the number of swaps must be minimized.
- Simple to implement and does not require additional memory.
- Works efficiently in situations where write operations are costly (fewer swaps).

**Disadvantages:**
- Inefficient for large datasets due to O(n²) time complexity.
- The number of comparisons remains the same regardless of the input order.
- Not a stable sort, meaning it may not preserve the relative order of equal elements.

**Use Cases:**
- Useful in situations where memory writes are expensive (e.g., EEPROMs).
- Can be used for small datasets where performance is not a major concern.

---

### 3. Insertion Sort

**Description:**

Insertion Sort builds a sorted array one element at a time by inserting each element into its correct position within the already sorted part. It is an adaptive algorithm that performs well on small or nearly sorted arrays.

**Algorithm:**
1. Start with the second element (the first element is trivially sorted).
2. Compare the current element with the elements in the sorted portion.
3. Shift larger elements to the right to make space for the current element.
4. Insert the current element in its correct position.
5. Repeat for each element until the entire array is sorted.

**Time Complexity:**
- Worst Case: O(n²)
- Best Case: O(n) (when the array is already sorted)
- Average Case: O(n²)

**Space Complexity:** O(1)

**Advantages:**
- Performs well on small or nearly sorted datasets.
- Adaptive: The time complexity can be as low as O(n) if the array is already sorted.
- Stable sort: Maintains the relative order of elements with equal values.
- Efficient for sorting a small number of elements or part of a larger array (such as in hybrid algorithms like Timsort).

**Disadvantages:**
- Inefficient for large datasets due to O(n²) time complexity.
- Shifts elements one by one, which can be slow for large unsorted arrays.

**Use Cases:**
- Frequently used for sorting small datasets.
- Used as part of more complex algorithms (like Timsort) where small parts of the array need to be sorted.
- Suitable for nearly sorted datasets, where the number of shifts is minimized.

---

## Comparative Summary:

### Time Complexities:

| Algorithm      | Best Case    | Average Case | Worst Case  | Space Complexity |
| -------------- | ------------ | ------------ | ----------- | ---------------- |
| **Bubble Sort**    | O(n)         | O(n²)        | O(n²)       | O(1)              |
| **Selection Sort** | O(n²)        | O(n²)        | O(n²)       | O(1)              |
| **Insertion Sort** | O(n)         | O(n²)        | O(n²)       | O(1)              |
