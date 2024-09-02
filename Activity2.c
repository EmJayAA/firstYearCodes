#include <stdio.h>

int main(){

    int A = 0, B = 0, C = 0, D = 0;

    printf("Enter number for A: ");
    scanf("%d", &A); 

    printf("Enter number for B: ");
    scanf("%d", &B); 

    printf("Enter number for C: ");
    scanf("%d", &C); 

    printf("Enter number for D: ");
    scanf("%d", &D); 

    printf("A: %d B: %d C: %d D: %d\n", A, B, C, D);

    int product = A * B * C * D;

    printf("The product of A, B, C, and D is %d\n", product);

    return 0;

}
