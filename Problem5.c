//
// Created by SUBRATA on 09/10/2024.

//2D matrix sum

#include <stdio.h>
int main() {
    int a[2][3],i,j,sum=0;
    printf("Enter elements of matrix:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is :\n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            printf("%d\t",a[i][j]);
            sum=sum + a[i][j];
        }
        printf("\n");
    }
    printf("Sum of the elements of matrix is %d",sum);
}