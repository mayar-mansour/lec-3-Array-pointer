#include <stdio.h>
// increment the value of x using pointer
int inc(int *p){
    (*p)++;
}
int main()
{
    int x = 0;
    // int *ptr = &x;
    // *ptr = 10;

    // printf(" x = %d \n", x); // x =10
    // printf(" &x = %p \n", &x); // the address of x
    // printf(" ptr = %p \n", ptr);   // the address of x
    // printf("&ptr  = %p \n", &ptr); // the address of pointer
    inc(&x);
    printf(" x = %d \n", x); // x =10
}