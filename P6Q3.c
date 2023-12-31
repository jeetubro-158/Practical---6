#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c,d;
    float r1,r2;
    printf("Enter values for a, b & c to calculate roots:\n");
    scanf("%d%d%d", &a,&b,&c);
    d = ((b*b)-(4*a*c));
    if(d == 0){
        r1=r2=(-b/(2*a));
        printf("root1 = %f & root2 = %f\n", r1,r2);
    }
    else if(d > 0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("root1 = %f & root2 = %f\n", r1,r2);
    }
    else{
        printf("Roota are not real.\n");
    }

}