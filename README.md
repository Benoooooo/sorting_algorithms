Team project done by  Nonkululeko Khanyile and Kelechi Nnandi

# Sorting Algorithms

## Bubble Sort Algorithm

### Function
```c
void bubble_sort(int *array, size_t size);
```

### Description
This function sorts an array of integers in ascending order using the Bubble sort algorithm. The function prints the array after each time two elements are swapped.

## Insertion Sort Algorithm for Doubly Linked List

### Function
```c
void insertion_sort_list(listint_t **list);
```

### Description
This function sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm. The function prints the list after each time two elements are swapped.

## Selection Sort Algorithm

### Function
```c
void selection_sort(int *array, size_t size);
```

### Description
This function sorts an array of integers in ascending order using the Selection sort algorithm. The function prints the array after each time two elements are swapped.

## Quick Sort Algorithm

### Function
```c
void quick_sort(int *array, size_t size);
```

### Description
This function sorts an array of integers in ascending order using the Quick sort algorithm with the Lomuto partition scheme. The pivot is set to be the last element of the partition being sorted. The function prints the array after each time two elements are swapped.

## Big O Notations

### Bubble Sort

#### File: 0-O
- Best case: O(n)
- Average case: O(n^2)
- Worst case: O(n^2)

### Insertion Sort

#### File: 1-O
- Best case: O(n)
- Average case: O(n^2)
- Worst case: O(n^2)

### Selection Sort

#### File: 2-O
- Best case: O(n^2)
- Average case: O(n^2)
- Worst case: O(n^2)

### Quick Sort

#### File: 3-O
- Best case: O(n log n)
- Average case: O(n log n)
- Worst case: O(n^2)

