
1. Easy: Understanding Bubble Sort
Manually sort the array ` [5, 2, 8, 1, 3] ` using the bubble sort technique. write down each step of the process.

Initial Array - [5, 2, 8, 1, 3]
Step-1:
•	Compare 5 and 2. Swap since 2 is smaller. New Array: [2, 5, 8, 1, 3]
•	Compare 5 and 8. No swap needed, as the number 5 is smaller than 8
•	Compare 8 and 1. Swap since 1 is smaller. Array: [2, 5, 1, 8, 3]
•	Compare 1 and 3. Swap since 3 is smaller. Array: [2, 5, 1, 3, 8]
Step-2:
        [2, 5, 1, 3, 8]
•	Compare 2 and 5. No swap needed.
•	Compare 5 and 1. Swap since 1 is smaller. Array: [2, 1, 5, 3, 8]
•	Compare 5 and 3. Swap since 3 is smaller. Array: [2, 1, 3, 5, 8]
•	Compare 5 and 8. No Swap needed.
Step-3:
        [2, 1, 3, 5, 8]
•	Compare 2 and 1. Swap needed since 1 is smaller. Array: [1, 2, 3, 5, 8]
•	Compare 2 and 3. No swap needed.
•	Compare 3 and 5. No swap needed.
•	Compare 5 and 8. No swap needed.

Now, The Array is sorted, the final result is [1, 2, 3, 5, 8]

2. Intermediate: Trace the Bubble Sort
Provided the unsorted array ` [7, 4, 2, 9, 1] ` and trace the bubble sort algorithm step by step, showing the changes in the array after each pass.

Initial Array: [7, 4, 2, 9, 1]
Step-1:
•	Compare 7 and 4. Swap needed since 4 is smaller. Array: [4, 7, 2, 9, 1]
•	Compare 7 and 2. Swap needed since 2 is smaller. Array: [4, 2, 7, 9, 1]
•	Compare 7 and 9. No swap needed as 9 is larger than 7.
•	Compare 9 and 1. Swap needed since 1 is smaller. Array: [4, 2, 7, 1, 9]
Step-2:
	[4, 2, 7, 1, 9]
•	Compare 4 and 2. Swap needed as 2 is smaller. Array: [2, 4, 7, 1, 9]
•	Compare 4 and 7. No Swap needed as the 7 is larger than 4.
•	Compare 7 and 1. Swap needed as 1 is smaller. Array: [2, 4, 1, 7, 9]
•	Compare 7 and 9. No swap needed.
Step-3:
	[2, 4, 1, 7, 9]
•	Compare 2 and 4. No swap needed. As 4 is larger than 2.
•	Compare 4 and 1. Swap needed since 1 is smaller. Array: [2, 1, 4, 7, 9]
•	Compare 4 and 7. No swap needed. As 7 is larger than 4.
•	Compare 7 and 9. No swap needed. As 9 is larger than 7.
Step-4:
	[2, 1, 4, 7, 9]
•	Compare 2 and 1. Swap needed since 1 is smaller. Array: [1, 2, 4, 7, 9]
•	Compare 2 and 4. No swap needed.
•	Compare 4 and 7. No swap needed.
•	Compare 7 and 9. No swap needed.
Now, The Array is sorted, Final Array is [1, 2, 4, 7, 9]

3. Intermediate: Code Implementation
Implement the bubble sort algorithm in C++. Provide them with the following unsorted array: ` [3, 6, 1, 8, 2] `. Code from scratch and test it to ensure it works correctly.

#include <bits/stdc++.h>
using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		// If no two elements were swapped
		// by inner loop, then break
		if (swapped == false)
			break;
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << " " << arr[i];
}

// Driver program to test above functions
int main()
{
	int arr[] = { 3, 6, 1, 8, 2 };
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}

4. Advanced: Optimization Challenge
Challenge yourself to optimize the bubble sort algorithm. Provided with the partially sorted array ` [1, 2, 3, 4, 5, 10, 9, 8, 7, 6] `. Optimize the algorithm to reduce the number of comparisons or swaps, making the sorting process more efficient.

#include <bits/stdc++.h>
using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		// If no two elements were swapped
		// by inner loop, then break
		if (swapped == false)
			break;
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << " " << arr[i];
}

// Driver program to test above functions
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 10, 9, 8, 7, 6 };
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}

5. Advanced: Comparison with Other Sorting Algorithms
Compare the bubble sort algorithm with quicksort and mergesort. Discuss the advantages and disadvantages of bubble sort in different scenarios. Additionally, analyze when it might be preferable to use other sorting algorithms.

Comparison between Bubble sort Algorithm and Quick Sort.
Bubble Sort algorithm significantly performs slower than Quick Sort for larger array sizes. This is due to the fact that Bubble Sort has a complexity of O(n²), while Quick Sort has a complexity of O(n log n).
 The number of comparisons in Bubble Sort increases rapidly with the array size since each element needs to be compared with other elements.
Quick Sort algorithm achieves faster sorting by using a pivot element and shows better performance with larger arrays due to its complexity.
The average case complexity of Quick Sort being O(n log n) indicates that it is a more efficient sorting method for larger arrays.
Comparison between Bubble sort algorithm and Merge sort.
An advantage of merge sort over bubble sort is that it is much faster and therefore takes less time to sort large lists and lists that are more unordered. However, bubble sort can actually be quicker than merge sort on smaller lists and lists that are mostly in order.
Bubble sort has O(n), and worst case scenario, it has O(n²) time complexity On the other hand, merge sort performs pretty consistently, with a time complexity of O(n log(n)).
Advantages and Disadvantages of Bubble sort:
Advantages:
Simplicity: Bubble sort is one of the simplest sorting algorithms to understand and implement. It makes it a good choice for educational purposes or situations where a straightforward algorithm is needed.
No Additional Memory: Bubble sort is an in-place sorting algorithm, meaning it doesn't require additional memory beyond the input array. This can be advantageous in situations where memory is limited.
Adaptive: Bubble sort can be adaptive, meaning its performance improves when the array is partially sorted.
Disadvantages:
Lack of Stability: Bubble sort is not a stable sorting algorithm. It may change the relative order of equal elements, which can be a drawback in scenarios where maintaining the original order is important.
Not Suitable for Real world Applications: Due to its inefficiency, bubble sort is not commonly used in real-world applications for sorting large datasets. There are more efficient algorithms available, such as quicksort or merge sort.
Inefficiency for large data sets: Bubble sort has a time complexity of O(n^2) in the worst and average cases, making it highly inefficient for large datasets.
Bubble sort Algorithm is considered in Educational purposes, Limited resources, Teaching sorting concepts, Functional programming and etc.



