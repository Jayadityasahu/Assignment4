#include<stdio.h>

int main(){

    int x, a, b, c;
    printf("Enter x:");
    scanf("%d", &x);

    if(x<100 || x>999){
        printf("Incorrect input");

    }else{

        a = x%10;
        b = ((x%100)-a)/10;
        c = (x-(x%100))/100;

        if(x == a*a*a + b*b*b + c*c*c){
            printf("\nThe number is an Armstrong number");
        }else {  printf("\nThe number is not an Armstrong number");
    }
    
}
return 0;
}