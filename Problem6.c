//
// Created by SUBRATA on 09/10/2024.
//
#include <stdio.h>
int main() {
    int a[2][3],i,j;
    printf("Enter elements of 2 x 3 Matrix: \n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix (2 x 3) :\n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Exchange the matrix (3 x 2) :\n");
    for(i=0;i<3;i++) {
        for(j=0;j<2;j++) {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

}
