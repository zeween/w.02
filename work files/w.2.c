#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    //Taking Number from user
    printf("Enter number :");
    scanf("%d",&num);

    //Cheking the number
    if(num%2==0)
    {
    printf("this number is even");
    }else printf("this number is odd");
    return 0;
}
