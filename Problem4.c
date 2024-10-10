//
// Created by SUBRATA on 09/10/2024.
//

//two array of size 5 & sum of arrays into third array

#include <stdio.h>
int main() {
    int arr1[5], arr2[5], arrsum[5];
    printf("Enter 5 elements for arr1: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter 5 elements for arr2: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < 5; i++) {
        arrsum[i] = arr1[i] + arr2[i];

        printf("%d + %d = %d\n", arr1[i], arr2[i], arrsum[i]);
    }


}