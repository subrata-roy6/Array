//
// Created by SUBRATA on 09/10/2024.
//even odd
#include<stdio.h>
void main() {
    int a[10],i;
    int even=0,odd=0;
    printf("Enter elements of array : ");
    for(i=0;i<10;i++) {
        scanf("%d",&a[i]);
        if(a[i]%2==0) {
            even++;
        }
        else {
            odd++;
        }
    }
    printf("Total even number:%d\n",even);
    printf("Total odd number:%d",odd);
}
