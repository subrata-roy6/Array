//
// Created by SUBRATA on 09/10/2024.
//
#include <stdio.h>
int main() {
   int arry[5],i;
  printf("Enter the five elements of the array\n");
    for(i=0;i<5;i++) {
        scanf("%d",&arry[i]);
    }
    for(i=0;i<5;i++) {
        printf("%d\t",arry[i]);
    }
printf("\n");
    for(i=4;i>=0;i--) {
        printf("%d\t",arry[i]);
    }
    return 0;
}