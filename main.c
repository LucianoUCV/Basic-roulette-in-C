#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, input,sum,stake;
    printf("$ Enter the sum you want to gamble: ");
    scanf("%d",&sum);
    printf("$ Enter the stake: ");
    scanf("%d",&stake);
    if(stake>sum)
    {
        printf("You don't have enough money!");
        return 0;
    }
    srand(time(NULL));
    printf("Good luck!");
    number=rand()%36;
    do
    {
        printf("\nEnter the number: ");
        scanf("%d",&input);
        if(number!=input)
        {
            printf("You lost %d dollars",stake);
            sum-=stake;
        }
        if(sum<stake&&sum)
        {
            printf("\nYou don't have enough money. The stake will be changed!");
            stake=sum;
        }
    }while((number!=input)&&sum);
    if(sum==0)
    {
        printf("\nYou lost everything! :(");
        return 0;
    }
    printf("\n$$$ Congratulations! $$$ You won %d dollars!",36*stake);
    return 0;
}
