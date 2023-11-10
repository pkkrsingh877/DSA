# Bubble Sort Algorithm

Bubble Sort is a simple sorting algorithm that repeatedly steps through a list, compares adjacent elements, and swaps them if they are in the wrong order. The algorithm gets its name because smaller elements "bubble" to the top of the list as they are compared and swapped.

## How Bubble Sort Works

1. **Comparison:** Start by comparing the first two elements in the list.

2. **Swapping:** If the first element is larger than the second, swap them. Otherwise, leave them in their current positions.

3. **Advancement:** Move on to compare the second and third elements, then the third and fourth, and so on, until the end of the list.

4. **Passes:** Each complete pass through the list ensures that the largest unsorted element moves to its correct position at the end of the list.

5. **Repetition:** Repeat steps 1 to 4 for as many times as there are elements in the list. The number of comparisons decreases with each pass as larger elements settle into their correct positions.

6. **Termination:** The algorithm terminates when no more swaps are needed in a pass, indicating that the list is now sorted.

Bubble Sort is straightforward but not very efficient, especially for large lists. It has a time complexity of O(n^2) in the worst case. While it's not typically used for large datasets, it's a valuable learning exercise to understand sorting algorithms and their mechanics.

