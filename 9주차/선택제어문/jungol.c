#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    printf("%d", a);
    
    if (a > 10)
    {
        printf("Larger than 10.\n");
    }
    else
        printf("%d", a);
    return 0;
    
}