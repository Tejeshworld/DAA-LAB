#include <stdio.h>
#define INF 999

int main() {
    int n, cost[10][10];
    int visited[10] = {0};
    int i, j, ne = 1;
    int min, a = 0, b = 0;
    int mincost = 0;
    
    printf("TEJESH KANTA-CH.SC.U4CSE24221");

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }

    visited[1] = 1;

    printf("\nEdges in Minimum Spanning Tree:\n");

    while (ne < n) {
        min = INF;
        for (i = 1; i <= n; i++) {
            if (visited[i]) {
                for (j = 1; j <= n; j++) {
                    if (!visited[j] && cost[i][j] < min) {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }

        printf("%d -> %d = %d\n", a, b, min);
        mincost += min;
        visited[b] = 1;
        ne++;
    }

    printf("\nMinimum cost = %d\n", mincost);
    return 0;
}
