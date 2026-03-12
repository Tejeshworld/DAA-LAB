// CH.SC.U4CSE24221
//Quick Select algorithm

#include <stdio.h>

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low;

    for(int j=low;j<high;j++)
    {
        if(arr[j]<=pivot)
        {
            swap(&arr[i],&arr[j]);
            i++;
        }
    }

    swap(&arr[i],&arr[high]);
    return i;
}

int quickSelect(int arr[],int low,int high,int k)
{
    if(low<=high)
    {
        int pi=partition(arr,low,high);

        if(pi==k)
            return arr[pi];
        else if(pi>k)
            return quickSelect(arr,low,pi-1,k);
        else
            return quickSelect(arr,pi+1,high,k);
    }
    return -1;
}

int main()
{
    printf("CH.SC.U4CSE24221\n");

    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int k;
    scanf("%d",&k);

    int result=quickSelect(arr,0,n-1,k-1);

    printf("%d",result);

    return 0;
}