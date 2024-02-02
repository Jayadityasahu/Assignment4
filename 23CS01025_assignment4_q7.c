#include<stdio.h>

int main(){

    int age, x;
    printf("Enter age:");
    scanf("%d", &age);
    
     if(age<5 ){
        printf("Ticket is free");
     }else if(age>=5 && age<=12){
        printf("Ticket is rupees 20");
     }else if(age>=13 && age<=59){
        printf("Ticket is rupees 50");
     }else if(age>=60){
        printf("Ticket is rupees 40 ");
     }

     return 0;
}