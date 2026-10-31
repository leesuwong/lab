#include <stdio.h>

int main(){
    int a;
    int b;
    int sum;

    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        sum+=b;
    }
    printf("%.2f",(double)sum/a);
    
}