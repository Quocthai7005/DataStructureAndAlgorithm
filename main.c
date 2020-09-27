#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"

int main() {

  int size;
  int array[size];
  int bubbleArray[size];
  int insertionArray[size];
  int selectionArray[size];
  int mergeArray[size];
  int interchangeArray[size];
  int quickArray[size];

  // Nhap so phan tu cua mang
  printf("Nhap so phan tu cua mang: ");
  size = inputSize();

  // Nhap gia tri tung phan tu cua mang
  for (int i = 0; i < size; i++) {
    printf("Nhap phan tu [%d]: ", i);
    scanf("%d", &array[i]);

    bubbleArray[i] = array[i];
    insertionArray[i] = array[i];
    selectionArray[i] = array[i];
    mergeArray[i] = array[i];
    interchangeArray[i] = array[i];
    quickArray[i] = array[i];
  }

  // In ra mang da nhap
  printf("Mang da nhap: [");
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d", array[i]);
    } else {
      printf("%d, ", array[i]);
    }
  }
  printf("]");

  // Selection sort
  selectionSort(selectionArray, size);
  printf("\nMang da thuc hien selection Sort: [");
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d", selectionArray[i]);
    } else {
      printf("%d, ", selectionArray[i]);
    }
  }
  printf("]");

  // Ket qua Bubble sort
  bubbleSort(bubbleArray, size);
  printf("\nMang da thuc hien bubble Sort: [");
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d", bubbleArray[i]);
    } else {
      printf("%d, ", bubbleArray[i]);
    }
  }
  printf("]");

  // Ket qua Insertion sort
  insertionSort(insertionArray, size);
  printf("\nMang da thuc hien insertion Sort: [");
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d", insertionArray[i]);
    } else {
      printf("%d, ", insertionArray[i]);
    }
  }
  printf("]");

  // Ket qua Insertion sort
  mergeSort(mergeArray, 0, size - 1, size);
  printf("\nMang da thuc hien merge Sort: [");
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d", mergeArray[i]);
    } else {
      printf("%d, ", mergeArray[i]);
    }
  }
  printf("]");

  return 0;
}

int inputSize() {
  int size;
  scanf("%d", &size);
  if (size >= 0 && size <=1000) {
    return size;
  } else {
    inputSize();
  }
}
