#include <stdio.h>
#include <math.h>

int main()
{
int num,factor,binary=0,multiplyer=1,decimal;
printf("Enter a number between(0-31) number: ");
scanf("%d",&num);


if(0<num && num<32){
    decimal=num;
    while(decimal!=0)
    {
        factor=decimal%2;
        factor*=multiplyer;
        binary+=factor;
        multiplyer*=10;
        decimal/=2;
    }
        printf("The binary value of %d number is %d",num,binary);
    }
else printf("Enter a valid number.!!!!\n");


}