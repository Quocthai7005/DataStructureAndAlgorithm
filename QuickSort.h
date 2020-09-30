#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED

void quickSort(int *array, int startIndex, int endIndex) {

  if (startIndex >= endIndex) return;

  int leftArrStart;
  int rightArrEnd;

  leftArrStart = startIndex;
  rightArrEnd = endIndex;

  int p = array[endIndex];
  int j = endIndex - 1;
  int i = startIndex;
  while (i <= j) {
    if (array[i] >= p && array[j] <= p) {
      int temp = array[i];
      array[i] = array[j];
      array[j] = temp;
      i++;
      j--;
    } else if (array[i] <= p && array[j] >= p) {
      i++;
      j--;
    } else if (array[i] >= p && array[j] > p) {
      j--;
    } else if (array[i] < p && array[j] <= p) {
      i++;
    }
  }

  int temp = array[i];
  array[i] = p;
  array[endIndex] = temp;

  // sau khi doi cho giua array[i] va pivot, thi giu lai vi tri [i],
  // tien hanh sort tiep cho 2 mang left va right
  quickSort(array, leftArrStart, i - 1);
  quickSort(array, i + 1, rightArrEnd);
}

#endif // QUICKSORT_H_INCLUDED
