#include<stdio.h>
#include<math.h>
int main()
{
    int h,m;
    scanf("%d : %d",&h,&m);
    float angle=(h*30-(m*5.5));
    angle=angle>0?angle:-1*angle;
    angle=angle>360-angle?360-angle:angle;
    int a=angle;
    if(angle==a)
    {
        printf("%.1f",angle);
    }
    else
    {
        printf("%.1f",angle);
    }
    return 0;
}