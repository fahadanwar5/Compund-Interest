#include <stdio.h>
int main(){
float principleamount,time,rate,pa,ci;
printf("Enter the principel amount:\n");
scanf("%f", &principleamount);
printf("Enter the time:\n");
scanf("%f", &time);
printf("Enter the rate:\n");
scanf("%f", &rate);


pa = principleamount *1.054*1.054;
printf("PA = %f\n", pa);

ci = principleamount - pa;
printf("CI = %f\n", ci);

}
