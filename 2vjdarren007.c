#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a2,a1,b2,b1;float R;
    printf("enter absissa and ordinate of two points whose distance is to be measured\n ");
    scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
    R=sqrt(pow((a2-a1),2)+pow((b2-b1),2));
    printf("\ndistance between the two points=%f",R);
    return 0;
}
