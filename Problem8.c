//
// Created by SUBRATA on 09/10/2024.
//
//Addition of the two matrix
#include <stdio.h>
int main() {
    int a[2][3], b[2][3], c[2][3],i,j;
    printf("Enter elements of Matrix A:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix A:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements of Matrix B:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix B:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("Addition of two Matrix:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}