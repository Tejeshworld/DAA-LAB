//CH.SC.U4CSE24221
#include <stdio.h>
int main() {
    int a[3][3], t[3][3], i, j;
    printf("Enter the elements in the matrix :\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
            }
           } 
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            t[j][i] = a[i][j];
            }
           } 
    printf("Matrix after transpose:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
            printf("%d ", t[i][j]);
            }
        printf("\n");
    }
    printf("CH.SC.U4CSE24221\n");
    return 0;
}

