#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int a = 5;
    int *p_a = &a;

    int b = 12;
    int *p_b = &b;

    printf("%d", *p_a + *p_b);
    return 0; 
}