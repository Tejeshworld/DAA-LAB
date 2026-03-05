//CH.SC.U4CSE24221
#include <stdio.h>
#include <stdlib.h>
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int bucketCount = 10; 
    int *buckets[bucketCount];
    int bucketSizes[bucketCount];
    for (int i = 0; i < bucketCount; i++) {
        buckets[i] = (int*)malloc(n * sizeof(int));
        bucketSizes[i] = 0;
    }
    int max = a[0], min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    for (int i = 0; i < n; i++) {
        int idx = (a[i] - min) * bucketCount / (max - min + 1);
        buckets[idx][bucketSizes[idx]++] = a[i];
    }
    for (int i = 0; i < bucketCount; i++)
        insertionSort(buckets[i], bucketSizes[i]);
    printf("Sorted array: ");
    for (int i = 0; i < bucketCount; i++)
        for (int j = 0; j < bucketSizes[i]; j++)
            printf("%d ", buckets[i][j]);
    printf("\n");
    for (int i = 0; i < bucketCount; i++)
        free(buckets[i]);
    printf("CH.SC.U4CSE24221\n");
    return 0;
}

