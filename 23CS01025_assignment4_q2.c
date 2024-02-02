#include<stdio.h>

int main(){

    int p, q, r;
printf("Enter p, q, r:");
scanf("%d%d%d", &p, &q, &r);

switch(p>q && p>r)
{ 
    case 0:
    printf("\np=%d is not largest", p);
    break;
    case 1:
    printf("\np=%d is largest", p);
    break;
}
switch(q>p && q>r)
{ 
    case 0:
    printf("\nq=%d is not largest", q);
    break;
    case 1:
    printf("\nq=%d is largest", q);
    break;
}
switch(r>p && r>q)
{ 
    case 0:
    printf("\nr=%d is not largest", r);
    break;
    case 1:
    printf("\nr=%d is largest", r);
    break;
}
return 0;


}