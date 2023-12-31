#include <stdio.h> 
int fact(int num);
int main(){
    int num;
    printf("Enter the Number to calculate factoral: \n");
    scanf("%d", &num);
    printf("%d Factorial = %d", num,(fact(num)));
}
int fact(int num){
    if (num == 0 || num ==1)
    return 1;
    else 
    return (num * fact(num-1));
}