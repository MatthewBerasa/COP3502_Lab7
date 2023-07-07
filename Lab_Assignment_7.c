#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y, int* swapArr, int index);
int* bubbleSort(int arr[], int arrSize);

int main() {
	int arr[] = { 97, 16, 45, 63, 13, 22, 7, 58, 72 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	puts("Array Before Swap: ");
	for (int i = 0; i < arrSize; i++)
		printf("%d ", arr[i]);

	int* swapArr = bubbleSort(arr, arrSize);
	puts("\n\nNumber of Swap Per Index: ");
	for (int z = 0; z < arrSize; z++)
		printf("Arr[%d]: %d\n", z, swapArr[z]);

	puts("\n\nArray After Swap: ");
	for (int j = 0; j < arrSize; j++)
		printf("%d ", arr[j]);
}

void swap(int* x, int* y, int* swapArr, int index) {
	int temp = *x;
	*x = *y;
	*y = temp;
	(*(swapArr + index))++;
}

int* bubbleSort(int arr[], int arrSize) {
	int* swapArr = (int*)calloc(arrSize, sizeof(int));

	for (int i = 0; i < arrSize - 1; i++) {
		for (int j = 0; j < arrSize - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr + j, arr + j + 1, swapArr, i);
			}
		}
	}

	return swapArr;
}