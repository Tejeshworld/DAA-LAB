// CH.SC.U4CSE24221
// Implement Quick Sort using three different pivot choices: first element, middle element, and last element

#include <stdio.h>

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int partitionLast(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;

    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[i+1],&arr[high]);
    return i+1;
}

int partitionFirst(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low+1;
    int j=high;

    while(1)
    {
        while(i<=high && arr[i]<=pivot) i++;
        while(arr[j]>pivot) j--;

        if(i>=j) break;

        swap(&arr[i],&arr[j]);
    }

    swap(&arr[low],&arr[j]);
    return j;
}

int partitionMiddle(int arr[],int low,int high)
{
    int mid=(low+high)/2;
    swap(&arr[mid],&arr[high]);
    return partitionLast(arr,low,high);
}

void quickSortLast(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partitionLast(arr,low,high);
        quickSortLast(arr,low,pi-1);
        quickSortLast(arr,pi+1,high);
    }
}

void quickSortFirst(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partitionFirst(arr,low,high);
        quickSortFirst(arr,low,pi-1);
        quickSortFirst(arr,pi+1,high);
    }
}

void quickSortMiddle(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partitionMiddle(arr,low,high);
        quickSortMiddle(arr,low,pi-1);
        quickSortMiddle(arr,pi+1,high);
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

int main()
{
    printf("CH.SC.U4CSE24221\n");

    int n;
    scanf("%d",&n);

    int arr1[n],arr2[n],arr3[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
        arr3[i]=arr1[i];
    }

    quickSortFirst(arr1,0,n-1);
    quickSortMiddle(arr2,0,n-1);
    quickSortLast(arr3,0,n-1);

    printArray(arr1,n);
    printArray(arr2,n);
    printArray(arr3,n);

    return 0;
}