#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED

// Merge Sort bang de quy

void mergeSort(int *array, int startIndex, int endIndex, int size) {
  if (size <= 1) return;

  int leftArrayLen = size/2;
  int rightArrayLen = size - leftArrayLen;
  int leftArrStart, leftArrEnd;
  int rightArrStart, rightArrEnd;

  leftArrStart = startIndex;
  leftArrEnd = startIndex + leftArrayLen - 1;
  rightArrStart = leftArrEnd + 1;
  rightArrEnd = endIndex;

  mergeSort(array, rightArrStart, rightArrEnd, rightArrayLen);
  mergeSort(array, leftArrStart, leftArrEnd, leftArrayLen);


  int tempArr[size];

  // tao array tam de phan bo gia tri
  for (int i = 0; i < leftArrayLen; i++) {
    tempArr[i] = array[i + leftArrStart];
  }

  // merge ket qua tu 2 array
  int mergeArrLen = leftArrayLen;
  for (int i = rightArrStart; i <= rightArrEnd; i++) {
    int n  = 0;
    bool inserted = false;
    while (n < mergeArrLen) {
      if (array[i] <= tempArr[n]) {
        for (int u = mergeArrLen; u >= n; u--) {
          if (u >= 1) {
            tempArr[u] = tempArr[u - 1];
          }
        }
        tempArr[n] = array[i];
        mergeArrLen++;
        inserted = true;
        break;
      }
      n++;
    }
    // truong hop gia tri tu array ben phai lon hon gia tri co trong array dang duoc insert
    if (!inserted) {
      tempArr[mergeArrLen] = array[i];
      mergeArrLen++;
    }
  }

  // gan gia tri tu array tam qua array dang sort
  for (int i = 0; i < size; i++) {
    array[leftArrStart + i] = tempArr[i];
  }
}

#endif // MERGESORT_H_INCLUDED
