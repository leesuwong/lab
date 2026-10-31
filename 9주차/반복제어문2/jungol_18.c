#include <stdio.h>

int main(){
    int a;
    int sum;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        if (i % 5 == 0)
        {
            sum += i;
        }
        
    }
    printf("%d", sum);
    
}