#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED

// Merge Sort bang de quy

void mergeSort(int *array, int startIndex, int endIndex, int size) {

    if (size <=1) return array;

    const int leftArrayLen = size/2;
    const int rightArrayLen = size - leftArrayLen;
    int leftArray[leftArrayLen];
    int rightArray[rightArrayLen];
    int leftMerge[leftArrayLen];
    int rightMerge[rightArrayLen];

    for (int i = 0; i < leftArrayLen; i++) {
        leftArray[i] = array[i];
    }

    for (int i = leftArrayLen; i < size; i++) {
        rightArray[i] = array[i];
    }

    int mergl[5] = mergeSort(leftArray, leftArrayLen);
    for (int i = 0; i < leftArrayLen; i++) {
        leftMerge[i] = mergl[i];
    }

    int rightMerge[rightArrayLen] = mergeSort(rightArray, rightArrayLen);

    int *mergeArray[size];
    for (int i = 0; i < leftArrayLen; i++) {
        mergeArray[i] = leftMerge[i];
    }
    for (int i = leftArrayLen; i < rightArrayLen; i++) {
        mergeArray[i] = rightArray[i];
    }
    return mergeArray;
}

#endif // MERGESORT_H_INCLUDED
