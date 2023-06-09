#include <stdio.h>

int main(void){

    int x;
    
    printf("x: ");
    scanf("%i", &x);
    
    int y;
    
    printf("y: ");
    scanf("%i", &y);

    if(x % 3 == 0 && y % 5 == 0)
    {
        printf("%i \n", x + y);
    }
    else if(x % 3 != 0 || y % 5 != 0)
    {
        printf("Os números escolhidos não são válidos.");
    }
}
