#include <stdio.h>

int main(){
    int a;
    int b = 0;

    scanf("%d", &a);

    for (int i = a; i <= 100; i++)
    {
        b += i;
    }
    printf("%d", b);
}