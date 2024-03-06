#include <stdio.h>
#include <math.h>
int main(){
    int number ;
    printf("Enter a number:");
    scanf("%d", &number);
    printf("%d \n", number > 9 && number < 100);
    return 0;
}