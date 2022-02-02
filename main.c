#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int n;
    printf("Enter Serise Limit : ");
    scanf("%d",&n);

    printf("Your Serise Summation Result is = %d", serise_sum(n));


    getch();
    return 0;
}

int serise_sum(int n)
{
    int i, sum=0;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    return sum;
}
