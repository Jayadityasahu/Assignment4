#include<stdio.h>

int main(){

    int  creditscore;
    double  currentbalance, interest;

    printf("Enter creditscore, currentbalance:");
    scanf("%d%lf", &creditscore, &currentbalance);

    if(creditscore<600){

        interest = (15/100.0)*currentbalance;
        printf("\nInterest = %lf", interest);
    } else if(600<creditscore && creditscore<750){

        interest = (12/100.0)*currentbalance;
        printf("\nInterest = %lf", interest);
    }
     else (creditscore>750);{

        interest = (10/100.0)*currentbalance;
        printf("\nInterest = %lf", interest);
} return 0;
}