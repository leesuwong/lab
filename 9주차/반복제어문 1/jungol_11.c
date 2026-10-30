#include <stdio.h>

int main(){
    int a;
    while (1)
    {
        printf("1. Korea\n");
        printf("2. USA\n");
        printf("3. Japan\n");
        printf("4. China\n");
        printf("number? \n");
        scanf("%d", &a);

        
        if (a == 1)
        {
            printf("Seoul\n\n");
        }else if(a == 2){
            printf("Washington, D.C.\n\n");
        }else if(a == 3){
            printf("Tokyo\n\n");
        }else if(a == 4){
            printf("Beijing\n\n");
        }else{
            printf("none");
            break;
        }

        
    }
    
}