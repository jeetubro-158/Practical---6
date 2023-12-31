#include <stdio.h>
void swap(int);
void main()
{
    int n;
    printf("Enter any two digit Number:");
    scanf("%d", &n);
    swap(n);
}
void swap(int n){
    int f,s;
    char *word[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    f = n/10;
    s = n%10;
    printf("%d\t%d\n", f,s);
    printf("%s\t%s", word[f],word[s]);
}