#include <stdio.h>

int main(){
    int a;
    int b = 0;
    int c = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a);
        if (a % 3 == 0)
        {
            ++b;
        }
         if (a % 5 == 0)
        {
            ++c;
        }
        
        
    }
    printf("Multiples of 3 : %d\n", b);
    printf("Multiples of 5 : %d", c);

    
}