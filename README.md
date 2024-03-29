# Project Title

## Sorting algorithms & Big O Project

### Overview

This project implements various sorting algorithms and provides a brief explanation of Big O notation. Understanding sorting algorithms and their efficiency is essential for optimizing code performance in data manipulation tasks.

### Sorting Algorithms

#### Bubble Sort

Bubble sort is a straightforward sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. Bubble sort has a worst-case and average-case time complexity of O(n^2), but it can be optimized to detect already sorted lists.

#### Insertion Sort

Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort provides several advantages: it is simple to implement, efficient for small datasets, and adaptive. The average and worst-case time complexity of insertion sort is O(n^2).

#### Selection Sort

Selection sort is a simple sorting algorithm that repeatedly finds the minimum element from the unsorted part of the array and swaps it with the first unsorted element. The time complexity of selection sort is O(n^2), making it suitable for small datasets.

#### Quick Sort

QuickSort is a divide-and-conquer algorithm that works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then recursively sorted. QuickSort has an average-case time complexity of O(n log n), making it more efficient than many other sorting algorithms in most cases.

### Big O Notation

Big O notation is a way to express the upper bound on the asymptotic behavior of an algorithm's time complexity. It provides a theoretical analysis of how an algorithm's performance scales with input size.

### Common Time Complexities:

| Algorithm      | Time Complexity (Worst Case) | Time Complexity (Average Case) | Time Complexity (Best Case) |
| --------------- | ---------------------------- | ------------------------------- | ---------------------------- |
| Bubble Sort     | O(n^2)                       | O(n^2)                          | O(n)                         |
| Selection Sort  | O(n^2)                       | O(n^2)                          | O(n^2)                       |
| Insertion Sort  | O(n^2)                       | O(n^2)                          | O(n)                         |
| Merge Sort      | O(n log n)                   | O(n log n)                      | O(n log n)                   |
| Quick Sort      | O(n^2) (worst case)           | O(n log n) (average case)       | O(n log n) (best case)       |
| Heap Sort       | O(n log n)                   | O(n log n)                      | O(n log n)                   |
