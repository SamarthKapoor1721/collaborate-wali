#include<stdio.h>
int main(){
    int n,total;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(total=0;n>=0;total=total+n,n--)
    {printf("%d",total);}
}