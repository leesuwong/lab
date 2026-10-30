#include <stdio.h>

int main(){
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d", a-b);
    }else if (b > a)
    {
        printf("%d", b-a);
    }
    
    
}