#include<stdio.h>
int main()
{
    int arr[100][100],n,i,j,sum1=0,sum2=0,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {scanf("%d",&arr[i][j]);}

    }
    for(i=1;i<n;i++)
    {
            sum1=arr[i][i]+sum1;
    }
    for(i=1;i<=n;i++)
       {
        if(j=n+1-i)
        {
            sum2=arr[i][j]+sum2;
        }
       }
    {
        sum=sum1-sum2;
    };
    printf("%d",sum);
    return 0;
}
