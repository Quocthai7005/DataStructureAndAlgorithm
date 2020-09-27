#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED

void bubbleSort(int *array, int size) {
  bool swap = true;
  while (swap) {
    swap = false;
    for (int i = size - 1; i > 0; i--) {
      if (i == 0) {
        continue;
      } else {
        if (array[i] < array[i-1]) {
            int temp = array[i];
            array[i] = array[i-1];
            array[i-1] = temp;
            swap = true;
        }
      }
    }
  }
};

#endif // BUBBLESORT_H_INCLUDED
