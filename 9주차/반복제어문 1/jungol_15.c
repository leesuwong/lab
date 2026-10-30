#include <stdio.h>

int main(){
    int a;
    int odd;
    int even;

    while (1)
    {
        scanf("%d", &a);

        if (a == 0)
        {
            break;
        }else if (a % 2 == 0)
        {
            even++;
        }else if(a % 2 != 0){
            odd++;
        }
    }
    printf("odd : %d\n",odd);
    printf("even : %d\n", even);
    
}