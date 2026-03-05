//CH.SC.U4CSE24221
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, i;
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\nCH.SC.U4CSE24221\n");
    return 0;
}

