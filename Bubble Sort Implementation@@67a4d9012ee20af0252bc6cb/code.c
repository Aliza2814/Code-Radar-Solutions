#include <stdio.h>

int calsum(int x, int y, int z);  // Function prototype

int main() {
    int a, b, c, sum;
    
    // Better prompt
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    
    sum = calsum(a, b, c);
    
    // Better output message
    printf("Sum = %d\n", sum);

    return 0;
}

// Function to calculate sum
int calsum(int x, int y, int z) {
    return x + y + z;  // Direct return
}

