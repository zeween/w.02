#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Id;
    //taking ID from user

    printf("Enter your ID: ");
    scanf("%d",&Id);

    //cheking the ID
    if(Id==1234){
    printf("Welcome Harry");

    }else if(Id==5678){
    printf("Welcome Ron");
    } else if (Id==1145){
    printf("Welcome Hermione");
    }else printf("Wrong Id");

    return 0;
}
