//CH.SC.U4CSE24221
#include <stdio.h>

void merge(int a[], int l, int m, int r)
{
    int i = l, j = m + 1, k = l;
    int b[50];

    while (i <= m && j <= r)
    {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    while (i <= m)
        b[k++] = a[i++];

    while (j <= r)
        b[k++] = a[j++];

    for (i = l; i <= r; i++)
        a[i] = b[i];
}

void mergesort(int a[], int l, int r)
{
    int m;
    if (l < r)
    {
        m = (l + r) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main()
{
    int a[50], n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    mergesort(a, 0, n - 1);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nCH.SC.U4CSE24221\n");
    return 0;
}

