#include <stdio.h>
int large(int *p);
int total(int *p1);
int per(int agg);
int grade(float percent);
int main(){
    int marks[5],i;
    for(i=1; i<=5; i++){
        printf("Enter the marks for subject %d: ",i);
        scanf("%d", &marks[i-1]);
    }
    large(&marks[0]);
    total(&marks[0]);
    
}
int large(int *p){
    int largest;
    largest=*p;
    for(int i=0; i<5; i++){
    if(largest < *p)
    largest = *p;
    p++;
    }
    printf("Highest Mraks = %d\n", largest);
}
int total(int *p1){
    int sum=0,sumper;
    for(int i=0; i<5; i++){
        sum=sum+*p1;
        p1++;
    }
    printf("Total marks = %d\n", sum);
    per(sum);
}
int per(int agg){
    float total,percent;
    total = agg;
    percent = (total/500) * 100;
    printf("percentage = %f\n", percent);
    grade(percent);
}
int grade(float percent){
    if (percent >= 80)
    printf("Grade 'O'");
    else if(percent >=60 && percent <= 80)
    printf("Grade 'A'");
    else if(percent >= 50 && percent <=60)
    printf("Grade 'B'");
    else if(percent >=40 && percent <=50)
    printf("Grade 'C'");
    else 
    printf("Grade 'F'");    
}
