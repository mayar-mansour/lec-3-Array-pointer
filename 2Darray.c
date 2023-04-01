
#include <stdio.h>
//scan the elements of 2d array then printed 
//here we need  2  main for loop 
//one for scanf and other for printf
//also we need 2 other for loop one for each dimension of array 
int main()
{

    int i = 0;
    int j = 0;
    int x[2][3] = {1, 2, 3 ,
                    1, 2, 3};
    printf("Enter 5 elements of the 2D array: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("The elements you entered are: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}