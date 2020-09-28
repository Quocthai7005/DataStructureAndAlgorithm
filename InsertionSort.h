#ifndef INSERTIONSORT_H_INCLUDED
#define INSERTIONSORT_H_INCLUDED

void insertionSort(int *array, int size) {
  for (int i = 0; i < size; i++) {
    int u = i;
    while (array[u] < array[u-1] && u-1 >= 0) {
      int temp = array[u-1];
      array[u-1] = array[u];
      array[u] = temp;
      u--;
    }
  }
}

#endif // INSERTIONSORT_H_INCLUDED
