#include<stdio.h>

// int main(){
//     int x[5];
//     int i=0;
//     for (i = 0; i < 5;i++){
//         x[i] = i + 1;
//         // scanf("%d", x[i]);
//         printf("Print x[0] : %d \n", &x[i]);
//         printf("Print x[0] : %d \n", &x);
//         printf("Print x[0] : %d \n", x);
//     }
// }

//task 
//scan 5 elements of array then print it 
int main(){
    int x[5];
    int i=0;
    printf("Enter 5 elements of the array: ");
    for (i = 0; i < 5;i++){
        scanf("%d", &x[i]);
    }
    printf("The elements you entered are: ");


    for (i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }
}