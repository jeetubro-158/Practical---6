#include <stdio.h>
#include <math.h>
void series();
void main()
{
    printf("1+1/2+1/2^2+...+1/2^10");
    printf("Sum for the above series is:\n");
    series();
}
void series(){
    float  sum=0;
    for(int i=0; i<=10; i++){
        sum = sum + (1/pow(2,i));
    }
    printf("Sum = %f\n", sum);
}