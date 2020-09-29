#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED

void quickSort(int *array, int startIndex, int endIndex, int size) {
  if (size <= 1) return;

  int leftArrayLen = size/2;
  int rightArrayLen = size - leftArrayLen;
  int leftArrStart, leftArrEnd;
  int rightArrStart, rightArrEnd;

  leftArrStart = startIndex;
  leftArrEnd = startIndex + leftArrayLen - 1;
  rightArrStart = leftArrEnd + 1;
  rightArrEnd = endIndex;

  int p = array[endIndex];
  int j = endIndex - 1;
  int i = startIndex;
  while (i <= j) {
      if (array[i] > p && array[j] < p) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
      }
  }

  int temp = array[i + 1];
  array[i + 1] = p;
  array[endIndex] = temp;

  if (startIndex <= endIndex) {
    quickSort(array, rightArrStart, i + 2, rightArrayLen);
    quickSort(array, leftArrStart, i, leftArrayLen);
  }
}

#endif // QUICKSORT_H_INCLUDED
