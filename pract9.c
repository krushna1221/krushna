#include <stdio.h>

int main() {
    int a, b, n, ne = 1, i, j, min, cost[10][10], mincost = 0, visited[10] = {0};

    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix:\n");

    // Input adjacency matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0) {
                cost[i][j] = 999; // Assign a large value for no connection
            }
        }
    }

    visited[0] = 1; // Start from the first vertex

    while (ne < n) {
        min = 999;
        for (i = 0; i < n; i++) {
            if (visited[i] == 1) {
                for (j = 0; j < n; j++) {
                    if (visited[j] == 0 && cost[i][j] < min) {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }

        if (visited[a] == 0 || visited[b] == 0) {
            printf("Edge(%d, %d) = %d\n", a + 1, b + 1, min); // Output edges with 1-based indexing
            mincost += min;
            visited[b] = 1;
            ne++;
        }
        cost[a][b] = cost[b][a] = 999; // Remove the edge from consideration
    }

    printf("\nMinimum spanning tree weight = %d\n", mincost);

    return 0;
}                                                                 
                                                                          