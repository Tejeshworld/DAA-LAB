//CH.SC.U4CSE24221
#include <stdio.h>
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int n;
    printf("Enter n :");
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    printf("CH.SC.U4CSE24221\n");
    return 0;
}

