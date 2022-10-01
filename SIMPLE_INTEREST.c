#include<stdio.h>
#include<math.h>
int main()
{
    int P,T,R,sum;
    scanf("%d%d%d",&P,&T,&R);
    sum=(P*R*T)/100;
    printf("%d",sum);//printf("%.2lf",ci);
    return 0;
}

//sum=(P*R*T/100)
//print("%0.0f"%sum)