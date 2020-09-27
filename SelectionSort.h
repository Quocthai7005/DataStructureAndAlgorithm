#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED


void selectionSort(int *array, int size) {

  for (int u = 0; u < size; u++) {
    int min = array[u];
    int index = u;

    // tim phan tu nho nhat va index cua no trong array
    for (int i = u; i < size; i++) {
      if (array[i] <= min) {
        min = array[i];
        index = i;
      }
    }

    // doi vi tri
    int temp = array[u];
    array[u] = min;
    array[index] = temp;
  }
}

#endif // SELECTIONSORT_H_INCLUDED
