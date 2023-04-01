#include <stdio.h>
//pointer to function
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Before swap: a = %d, b = %d\n", a, b);
    //pointer to function
    void(*ptf)(int * , int *);
    ptf = &swap;
    (*ptf)(&a, &b);
    /********************/
    printf("After swap: a = %d, b = %d\n", a, b);
}