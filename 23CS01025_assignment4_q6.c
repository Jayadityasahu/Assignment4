#include<stdio.h>

int main(){

    int p, q, r, x;
    printf("Enter p, q:");
    scanf("%d %d", &p, &q);
    printf("Enter r:");
    scanf("%d", &r);


    switch(r){

        case 1:
        x = p+q;
        printf("The value of x is %d", x);
        break;
        case 2:
        x = p-q;
        printf("The value of x is %d", x);
        break;
        case 3:
        x = p*q;
        printf("The value of x is %d", x);
        break;
        case 4:
        x = p+q;
        printf("The value of x is %d", x);
        break;
        default:
        printf("The r is invalid");
        break;
        

    }
    return 0;
}