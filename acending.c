#include<stdio.h>

int main()
{
    int ar[5],i,t,n,tm;

    printf("Enter any 5 numbers: ");
    for (i=0;i<5;i++) 
    scanf("%d",&ar[i]);

    for (t=0;t<5;t++) 
    {
       for (n=0;n<5;n++)
       {
        if(ar[n]>ar[t]) 
        {
           tm=ar[n];
           ar[n]=ar[t];
           ar[t]=tm;
        }
       }
    }

printf("the accending order is: ");
    for (i=0;i<5;i++) 
       printf(" %d\n",ar[i]); 
    return 0;
}