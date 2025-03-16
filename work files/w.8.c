#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter your number :");
    scanf("%d",&num);
    for (int i=0;i<=12;i++){
        printf("%d * %d =%d \n",num,i,num*i);
    }
    return 0;
}
