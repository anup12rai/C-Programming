#include<stdio.h>

int main()
{
    int a=0,b=1,n,i,c;

    printf("ENter the number: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {

        c=a+b;
        printf("%d\n",a);
        a=b;
        b=c;
    }
}
/*
a=0
b=1
c = a+b;

c = 0+1 = 1
a =1


*/