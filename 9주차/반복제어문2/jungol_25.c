#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    c = a;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            
            
            printf("%d * %d = %2d  ",c,i,c*i);
            printf(" ");
            c--;
            
            
        }
        c = a;
        printf("\n");
    }
    
}