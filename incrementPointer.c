#include<stdio.h>
int main(){
// Increment the value of x using pointers
int x = 0;
int *ptr = &x; // Create a pointer to x

for (x = 0; x < *ptr; x++)
{
    printf("Value of x: %d\n", x);
}

// Increment the value of x using the pointer
(*ptr)++;

printf("Value of x after increment: %d\n", x);
}