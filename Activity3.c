#include <stdio.h>

int main() {
    int num;

    printf("Enter a number from -100 to 100: ");
    scanf("%d", &num);

    if (num < -100 || num > 100) {
        printf("Error: Number out of range. Please enter a number between -100 and 100.\n");
    }

    else if (num == 0) {
        printf("0 is neither an even nor odd number");
    } 
    
    else {
        if (num % 2 == 0) {
            printf("The number %d is even.\n", num);
        } else {
            printf("The number %d is odd.\n", num);
        }
    }

    return 0;
}