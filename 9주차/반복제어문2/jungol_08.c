#include <stdio.h>

int main(){
    int a;
    int b = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            b++;
        }
        
    }
    printf("Even numbers = %d", b);
    
}