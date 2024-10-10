//
// Created by SUBRATA on 09/10/2024.
//
//print sum of individual row and colum
#include <stdio.h>
int main() {
    int a[3][3],i,j,srow,scol;
    printf("Enter elements of matrix(3x3): \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("rows and columns of matrix: \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++) {
        srow=0; scol=0;
        for(j=0;j<3;j++) {
            srow=srow + a[i][j];
            scol=scol+ a[j][i];
        }
        printf("row = %d ,colum=%d\n",srow,scol);
    }

}