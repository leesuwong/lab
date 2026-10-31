#include <stdio.h>

int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b)
    {
        int c = a;
        a = b;
        b = c;
    }
    

    for (int i = a; i <= b; i++)
    {
        printf("%d ", i);
    }
    
}