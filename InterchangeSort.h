#ifndef INTERCHANGESORT_H_INCLUDED
#define INTERCHANGESORT_H_INCLUDED

void interchangeSort(int *array, int size) {
  for (int i = 0; i < size; i++) {
    for (int u = i + 1; u < size; u++) {
      if (array[u] < array[i]) {
        int temp = array[i];
        array[i] = array[u];
        array[u] = temp;
      }
    }
  }
}

#endif // INTERCHANGESORT_H_INCLUDED
