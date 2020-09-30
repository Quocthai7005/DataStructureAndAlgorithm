#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "InterchangeSort.h"
#include "QuickSort.h"

int main() {

  int size;
  int sortAlgorithm;

  printf("Cac phuong phap sort: \n");
  printf("1. Bubble Sort \n2. Insertion Sort \n3. InterChange Sort \n4. Merge Sort \n5. Quick Sort \n6. Selection Sort\n\n");

  printf("Nhap phuong phap sort Ban muon thuc hien.\n");
  printf("Vi du, neu muon dung Insertion Sort, nhap so 2, roi nhan enter: ");
  scanf("%d", &sortAlgorithm);

  // Nhap so phan tu cua mang
  printf("Nhap so phan tu cua mang: ");
  size = inputSize();
  int array[size];

  // Nhap gia tri tung phan tu cua mang
  for (int i = 0; i < size; i++) {
    printf("Nhap phan tu [%d]: ", i);
    scanf("%d", &array[i]);
  }

  // In ra mang da nhap
  printf("Mang da nhap: ");
  printArray(array, size);

  switch (sortAlgorithm) {
    case 1:
      printf("\nPhuong phap Sort: Bubble Sort");
      bubbleSort(array, size);
      break;
    case 2:
      printf("\nPhuong phap Sort: Insertion Sort");
      insertionSort(array, size);
      break;
    case 3:
      printf("\nPhuong phap Sort: Interchange Sort");
      interchangeSort(array, size);
      break;
    case 4:
      printf("\nPhuong phap Sort: Merge Sort");
      mergeSort(array, 0, size - 1, size);
      break;
    case 5:
      printf("\nPhuong phap Sort: Quick Sort");
      quickSort(array, 0, size - 1);
      break;
    case 6:
      printf("\nPhuong phap Sort: Selection Sort");
      selectionSort(array, size);
      break;
    default:
      printf("Vui long nhap tu 1 toi 6");
  }

  printf("\n*** Mang da thuc hien Sort ***: ");
  printArray(array, size);

  return 0;
}

int inputSize() {
  int size;
  scanf("%d", &size);
  if (size >= 0 && size <=10000) {
    return size;
  } else {
    inputSize();
  }
}

void printArray(int * array, int size) {
  printf("[");
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d", array[i]);
    } else {
      printf("%d, ", array[i]);
    }
  }
  printf("]");
}
