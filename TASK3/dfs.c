//CH.SC.U4CSE24221
#include <stdio.h>
int g[10][10], v[10], n;
void dfs(int i) {
    printf("%d ", i);
    v[i] = 1;
    for (int j = 0; j < n; j++) {
        if (g[i][j] && !v[j])
            dfs(j);
    }
}
int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &g[i][j]);

    dfs(0);
    printf("\nCH.SC.U4CSE24221\n");
    return 0;
}

