#include <stdio.h>

int main() {
    int num;
    char set[20];
    printf("Enter number of elements: ");
    scanf("%d", &num);
    printf("Enter elements: ");
    for (int i = 0; i < num; i++) {
        scanf(" %c", &set[i]);
    }

    int powerSetSize = 1 << num; // 2^num
    for (int i = 0; i < powerSetSize; i++) {
        printf("{");
        for (int j = 0; j < num; j++) {
            if (i & (1 << j)) {
                printf("%c", set[j]);
            }
        }
        printf("}\n");
    }
    return 0;
}
