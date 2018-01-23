#include<stdio.h>
int main()
{
    int arr[1000],i,n;
    float a=0,b=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
            a++;
        else if(arr[i]<0)
            b++;
        else
            c++;
    }
    printf("%f\n",a/n);
    printf("%f\n",b/n);
    printf("%f\n",c/n);
    return 0;
}
