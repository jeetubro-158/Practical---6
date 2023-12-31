#include <stdio.h>
int sum(int, int, int);
int main()
{
    int a,b,c,r;
    printf("Enter three numbers to add:\n");
    scanf("%d%d%d", &a,&b,&c);
    r=sum(a,b,c);
    printf("sum = %d\n", r);
}
int sum(int a, int b, int c){
    int sum=0;
    sum=a+b+c;
    return sum;
}