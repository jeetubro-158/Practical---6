# include <stdio.h>

int sum(int num);

int main(){
    int num;
    printf("Enter the no. to calculate sum of natural No. : \n");
    scanf("%d", &num);
    printf("The sum of %d natural numbers are: %d.",num, sum(num));
}
int sum(int num){
    if( num == 1 || num == 0){
        return 1;
    }
    else
    return (num + sum(num-1));
}
