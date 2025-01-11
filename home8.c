#include <stdio.h>
int main() {
    int x,y;
    printf("enter the first number: ");
    if(scanf("%d",&x)!=1)
    {printf("wrong please enter an integer \n"); return 1;}
    printf("enter the second number: ");
    if(scanf("%d",&y)!=1)
    {printf("wrong please enter an integer \n");  return 1;}
    printf("the result:%d\n",x+y);
    return(0);
} 