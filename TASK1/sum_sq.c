//CH.SC.U4CSE24221
#include <stdio.h>
int sum_sq(int n) {
    int s = 0;
    for(int i = 1; i <= n; i++) {
        s += i*i;
    }
    return s;
}
int main() {
    int n;
    printf("Enter n :");
    scanf("%d", &n);
    printf("%d\n", sum_sq(n));
    printf("CH.SC.U4CSE24221\n");
    return 0;
}

