#include <stdio.h>

int main(){
    int sum=0;
    int num=0;
    int a = 0;

    scanf("%d", &num);

    while (a <= num)
    {
        sum+=a;
        a++;
    }
    printf("%d", sum);
    
}