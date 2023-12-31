#include <stdio.h>
void sum(int n);
void main()
{
   int a;
   printf("Enter the value for calculatin sum:\n");
   scanf("%d", &a);
   sum(a);
}
void sum(int n){
    int i,sum=0;
    for(i=1; i<=n; i++){
        sum = sum + i;
    }
    printf("Sum = %d\n", sum);
}