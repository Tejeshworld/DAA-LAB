//CH.SC.U4CSE24221
#include <stdio.h>
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    int temp;

    if(left < n && arr[left] > arr[largest])
        largest = left;
    if(right < n && arr[right] > arr[largest])
        largest = right;

    if(largest != i) {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}
int main() {
    int n, i, temp;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for(i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    
    for(i = n-1; i > 0; i--) {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
    
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("CH.SC.U4CSE24221\n");
    return 0;
}

