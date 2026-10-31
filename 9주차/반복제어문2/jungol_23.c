#include <stdio.h>

int main(){
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("%d ", i*j);
        }
        printf("\n");
        
    }
    
}