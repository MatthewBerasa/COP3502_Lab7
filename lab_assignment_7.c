#include <stdio.h>

void swap(int* x, int* y, int* swapCount);
int bubbleSort(int arr[], int arrSize);

int main() {
	int arr[] = { 97, 16, 45, 63, 13, 22, 7, 58, 72 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	puts("Array Before Swap: ");
	for (int i = 0; i < arrSize; i++)
		printf("%d ", arr[i]);

	printf("\n\nBubble Sort Numbers of Swap: %d", bubbleSort(arr, arrSize));

	puts("\n\nArray After Swap: ");
	for (int j = 0; j < arrSize; j++)
		printf("%d ", arr[j]);
}

void swap(int* x, int* y, int* swapCount) {
	int temp = *x;
	*x = *y;
	*y = temp;
	(*swapCount)++;
}

int bubbleSort(int arr[], int arrSize) {
	int swapCount = 0;

	for (int i = 0; i < arrSize - 1; i++) {
		for (int j = 0; j < arrSize - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr + j, arr + j + 1, &swapCount);
			}
		}
	}

	return swapCount;
}