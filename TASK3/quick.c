//CH.SC.U4CSE24221
#include <stdio.h>
void quicksort(int a[], int low, int high)
{
    int i, j, pivot, temp;
    if (low < high)
    {
        pivot = a[low];
        i = low;
        j = high;

        {
            while (a[i] <= pivot && i < high)
                i++;
            while (a[j] > pivot)
                j--;
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        a[low] = a[j];
        a[j] = pivot;

        quicksort(a, low, j - 1);
        quicksort(a, j + 1, high);
    }
}
int main()
{
    int a[12], n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, n - 1);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nCH.SC.U4CSE24221\n");
    return 0;
}

