#include <stdio.h>

int main(){
    int a = 10;
    int* num;

    num = &a;

    printf("(*p)++ = %d \n", (*num)++);
    printf("*(p++) = %d \n", *(num++));
    printf("(*p)+1 = %d \n", (*num)+1);
    printf("*p+=1 = %d \n", *num+=1);
    printf("*p=*p+1 = %d \n", *num=*num+1);
    printf("++*p = %d \n", ++*num);
    printf("++(*p) = %d \n", ++(*num));
}