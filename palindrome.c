#include<stdio.h>
int main()
{
    int n,q,remain,result=0;
    printf("Enter the number: ",n);
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        remain=q%10;
        result=result*10+remain;
        q=q/10;
    }
    if(result==n)
    {
         printf("It is a palindrome");
    }
    else{
        printf("It is not a palindrome");
    }


    return 0;
}
