#include<stdio.h>
int main()
{
    float N,sum=0;
    int i,count=0;
    while(1)
    {
        scanf("%f",&N);

        if(N>=0 && N<=10)
        {
            count++;
            sum=sum+N;
        }
        else
        {
            printf("nota invalida\n");


        }
        if(count==2) break;

    }
    printf("media = %.2f\n",sum/2.00);

    return 0;
}
