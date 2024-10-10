//
// Created by SUBRATA on 09/10/2024.
//
#include <stdio.h>
int main() {
    float marks[5],sum=0.0;
    float avg;
    printf("Enter the five marks: ");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
    }
    for (int i = 0; i < 5; i++) {
        sum =sum + marks[i];
    }
    avg = sum / 5;
    printf("Sum =%.2f\n",sum);
    printf("Average mark is: %.2f", avg);


}