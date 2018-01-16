#include<stdio.h>
int main()
{
   long long int arr[10000],i,n,sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&arr[i]);
    for(i=0;i<n;i++)
    sum=sum+arr[i];
    printf("\n%lld",sum);
    return 0;
}
