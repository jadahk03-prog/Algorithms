#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15

void bubbleSort(int arr[], int n) { //버블 정렬 함수
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {    // swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void make_random(int arr[], int size) { //랜점 배열 생성
    srand((unsigned int)time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Random numbers between 0 and 99
    }
}

int main() {
    int arr[SIZE];
    make_random(arr, SIZE);
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Original array: \n");
    printArray(arr,n);

    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}