#include <stdio.h>
void swap(int, int);
void main()
{
    int a=10, b=5;
    printf("Before swapping a=%d & b=%d\n", a,b);
    swap(a,b);

}
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Before swapping a=%d & b=%d\n", a,b);
}
