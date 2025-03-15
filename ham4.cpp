#include <stdio.h>
#include <stdlib.h>
int **setup(int hang, int cot) {
    int **a = (int **)malloc(hang * sizeof(int *));
    for (int i = 0; i < hang; i++) {
        a[i] = (int *)malloc(cot * sizeof(int));
    }
    return a;
}
void free(int **a, int hang) {
    for (int i = 0; i < hang; i++) {
        free(a[i]);
    }
    free(a);
}
void scanf(int **a, int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void printf(int **a, int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int **sum(int **a, int **b, int hang, int cot) {
    int **c = setup(hang, cot);
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    return c;
}
int **tich(int **a, int **b, int hang1, int cot1, int cot2) {
    int **c = setup(hang1, cot2);
    for (int i = 0; i < hang1; i++) {
        for (int j = 0; j < cot2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < cot1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}

int main() {
    int hang, cot, hang2, cot2;
    printf("Nhap lan luot hang va cot cua ma tran 1: ");
    scanf("%d%d", &hang, &cot);
    int **A = setup(hang, cot);
    scanf(A, hang, cot);
    printf("Nhap lan luot hang va cot cua ma tran 2: ");
    scanf("%d%d", &hang2, &cot2);
    int **B = setup(hang2, cot2);
    scanf(B, hang2, cot2);
    printf("\nMa tran 1:\n");
    printf(A, hang, cot);
    printf("\nMa tran 2:\n");
    printf(B, hang2, cot2);
    if (hang == hang2 && cot == cot2) {
        int **C = sum(A, B, hang, cot);
        printf("\nTong 2 ma tran la:\n");
        printf(C, hang, cot);
        free(C, hang);
    } else {
        printf("\nKhong the tinh tong.\n");
    }
    if (cot == hang2) {
        int **D = tich(A, B, hang, cot, cot2);
        printf("\nTich 2 ma tran la:\n");
        printf(D, hang, cot2);
        free(D, hang);
    } else {
        printf("\nKhong the tinh tich.\n");
    }
    free(A, hang);
    free(B, hang2);

}