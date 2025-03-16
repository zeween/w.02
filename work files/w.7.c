#include <stdio.h>
#include <stdlib.h>

int main()
{int Count =1;
 int num=0;
 int sum=0;
 float avg=0;

    for(int i=1;i<=10;i++){
    printf("enter %d number :",Count);
    scanf("%d",&num);
    Count++;
    sum+=num;
    }
    avg=(float)sum/10;
    printf("the sum =%d \n",sum);
    printf("the avg =%f",avg);
    return 0;
}
