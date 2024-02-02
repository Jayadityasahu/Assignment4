#include<stdio.h>
int main(){

    int a;
    printf("Enter a:");
    scanf("%d", &a);

    switch(a%2)
    {
        case 0:
        printf("The number is even");
        break;
        default:
        printf("The number is odd");
        break;

    }
    return 0;
}