#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED

// Merge Sort bang de quy

void mergeSort(int *array, int startIndex, int endIndex, int size) {

//    printf("^^^^^^^^^^^^^\n");
//    printf("init array: start - %d, end - %d, size - %d\n", startIndex, endIndex, size);
    if (size <= 1) return;

    int leftArrayLen = size/2;
    int rightArrayLen = size - leftArrayLen;
    int leftArrStart, leftArrEnd;
    int rightArrStart, rightArrEnd;

    leftArrStart = startIndex;
    leftArrEnd = startIndex + leftArrayLen - 1;
    rightArrStart = leftArrEnd + 1;
    rightArrEnd = endIndex;

    printf("left array: start - %d, end - %d, size - %d\n", leftArrStart, leftArrEnd, leftArrayLen);
    for (int i = leftArrStart; i <= leftArrEnd; i++) {
        printf("%d", array[i]);
    }

    printf("^^^^^^^^^^^^^\n");

    printf("right array: start - %d, end - %d, size - %d\n", rightArrStart, rightArrEnd, rightArrayLen);
    for (int i = rightArrStart; i <= rightArrEnd; i++) {
        printf("%d", array[i]);
    }

    printf("^^^^^^^^^^^^^\n");

    mergeSort(array, rightArrStart, rightArrEnd, rightArrayLen);

    mergeSort(array, leftArrStart, leftArrEnd, leftArrayLen);

    // merge

}

#endif // MERGESORT_H_INCLUDED
